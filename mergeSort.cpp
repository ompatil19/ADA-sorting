#include<iostream>
#include<ctype.h>
using namespace std;


//TIME COMPLEXITY FOR BOTH BEST AND WORST CASE IS O(nlogn)
void merge(int a[], int lb, int mid, int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[ub];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            k++;j++;
        }
    }
    else{
        while(i<=mid)
        {
            b[k]=a[i];
            k++;i++;
        }
    }
    for(int k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}

void mergeSort(int a[], int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

//time complexity for this is theta(m+n)
//m is the number of elements in one list and n is the number of elements in the other list
//the two lists are to be merged