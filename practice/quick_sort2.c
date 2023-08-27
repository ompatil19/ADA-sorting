#include <stdio.h>
int partition(int a[], int low,int high){
    int i=low-1;
    int pivot=a[high];
    for(int j=low;i<high-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}