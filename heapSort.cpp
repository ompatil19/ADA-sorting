// #include<iostream>
// #include<ctype.h>
// using namespace std;

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int * b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[], int N, int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<N && arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<N && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{
    for(int i=N/2-1;i>=0;i--)
    {
        heapify(arr,N,i);
    }
    for(int i=N/2;i>=0;i--)
    {
        heapify(arr,i,0);
    }
}

int main()
{
    int N=1000;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        arr[i]=rand();
    }
    for(int i=0;i<N;i++)
    {
        printf("%d  ",arr[i]);
    }
    clock_t start=clock();
    heapSort(arr,N);
    clock_t end=clock();
    double time=(double)(end-start)/CLOCKS_PER_SEC;
    for(int i=0;i<N;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("time taken is %d",time);
    return 0;
}












// void maxHeapify(int a[],int n,int i)
// {
//     int largest=i;
//     int l=2*i;
//     int r=2*i+1;
//     while(l<=n && a[l]>a[largest])
//     {
//         largest=l;
//     }
//     while(r<=n && a[r]>a[largest])
//     {
//         largest=r;
//     }
//     if(largest!=i)
//     {
//         swap(a[largest],a[i]);
//         heapify(a,n,largest);
//     }
// }
// void heapSort(int a[], int n)
// {
//     for(int i=n/2;i>=1;i--)
//     {
//         maxHeapify(a,n,i);
//     }//for building
//     for(int i=n;i>=1;i--)
//     {
//         swap(a[1],a[i]);
//         maxHeapify(a,i-1,1);
//     }//for deleting
// }