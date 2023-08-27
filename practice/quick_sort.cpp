#include <iostream>
using namespace std;
int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void quick_sort(int a[],int low,int high){
    if(low<high){
        int p=partition(a,low,high);
        cout<<p<<endl;
        quick_sort(a,low,p-1);
        quick_sort(a,p+1,high);
    }
}
int main(){
    int a[]={5,1,12,49,3,8,300};
    int n=sizeof(a)/sizeof(a[0]);
    quick_sort(a,0,n-1);
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}