#include <iostream>
using namespace std;
#include <ctime>
#include <bits/stdc++.h>

//the largest number is getting pushed to the end of the array like a bubble

void bubbleSort(int arr[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
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
    bubbleSort(arr,n);
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