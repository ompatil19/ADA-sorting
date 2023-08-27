#include <iostream>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    int a[]={5,1,12,49,3,8,300};
    int n=sizeof(a)/sizeof(a[0]);
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                // cout<<"min value is "<<a[min]<<endl;
                // cout<<"j value is "<<a[j]<<endl;
                min=j;
            }
        }
        if(min!=i){
            swap(a[min],a[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}