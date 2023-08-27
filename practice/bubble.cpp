#include <iostream>
#include <ctime>
using namespace std;
int main(){
	clock_t time_req;
    cout<<"hello"<<endl;
    int a[]={5,1,12,49,3,8,300};
    int n=sizeof(a)/sizeof(a[0]);
    time_req = clock();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}