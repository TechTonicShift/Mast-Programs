#include <iostream>
#include <cmath>
using namespace std;

int maxconsecutiveones(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            if(arr[j]==1){
                curr++;
            }
            else{
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}

int optimized(int arr[],int n){
    int res=0;
        int curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr=0;
        }
        else{
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    //Given an array of 1's and 0's, find maximum number of consecutive 1's
    
    int arr[]={0,1,1,1,0,1};
    cout<<maxconsecutiveones(arr,6)<<endl;
    cout<<optimized(arr,6)<<endl;
    return 0;
}
