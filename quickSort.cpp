#include <iostream>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;


//worst case is O(n^2);
//best case is O(nlogn);
int partition(int arr[], int lb, int ub)
{
    int start=lb;
    int end=ub;
    int pivot=arr[lb];
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}

void quickSort(int arr[],int lb, int ub)
{
    if(lb<ub)
    {
        int loc=partition(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}