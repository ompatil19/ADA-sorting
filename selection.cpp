#include <iostream>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;

//the smallest element in the whole array is found and it put at the front of the array.
//that element is then excluded and the smallest number is found among the rest and that is put afyer 
//the first element etc

void selectionSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            // swap(a[min],a[i]);
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%7000;
    }
    cout<<"the array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    clock_t start=clock();
    selectionSort(arr,n);
    clock_t end=clock();
    double time=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<"sorted array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"time taken is "<<time;
    return 0;
}
