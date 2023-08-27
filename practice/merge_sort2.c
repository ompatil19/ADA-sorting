#include <stdio.h>
void merge(int a[],int beg,int mid, int end){
    int n1=mid-beg+1;
    int n2=end-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[beg+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=a[mid+j+1];
    }
    int i=0;
    int j=0;
    int k=beg;
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            a[k]=left[i];
            i++;
            k++;
        }
        else{
            a[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
}
void merge_sort(int a[],int beg, int end){
    int mid;
    if(beg<end){
        mid=(beg+end)/2;
        merge_sort(a,beg,mid);
        merge_sort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
int main(){
    int a[]={5,1,12,49,3,8,300};
    int n=sizeof(a)/sizeof(a[0]);
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}