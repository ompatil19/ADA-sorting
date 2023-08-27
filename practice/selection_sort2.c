#include <stdio.h>
void selection_sort(int a[], int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int main(){
    int a[]={5,1,12,49,3,8,300};
    int n=sizeof(a)/sizeof(a[0]);
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}