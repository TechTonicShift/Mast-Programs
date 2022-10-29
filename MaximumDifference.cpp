#include <iostream>
#include <cmath>
using namespace std;

void maxdiff(int arr[],int n){
    int res=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i]);
        }
    }
    cout<<res<<endl;
}

void optimizedmaxdiff(int arr[],int n){
    int minval=arr[0];
    int res=arr[1]-minval;
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    cout<<res<<endl;
    
}

int main()
{
    //Write a program to find maximum difference between elements arr[j]-arr[i] where j>i
    int arr[]={2,3,10,6,4,8,1};
    maxdiff(arr,7);
    cout<<endl;
    optimizedmaxdiff(arr,7);
    return 0;
}
