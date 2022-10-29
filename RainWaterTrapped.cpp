#include <iostream>

using namespace std;

int raintrapped(int arr[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for(int j=i+1;j<n;j++){
            rmax=max(rmax,arr[j]);
        }
        res+=min(lmax,rmax)-arr[i];
    }
    return res;
    
}

int optimizedraintrapped(int arr[],int n){
    //WE will make separate lmax and rmax arrays in order to take account of lmax and rmax of index i
    int res=0;
    int lmax[n];
    int rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    
    for(int i=1;i<n-1;i++){
        res+=min(lmax[i],rmax[i])-arr[i];
    }
    return res;
}
int main()
{
    //Find rain water trapped between walls where height of walls is represented by elements of an array
    int arr[]={3,0,1,2,5};
    cout<<raintrapped(arr,5)<<endl;
    cout<<endl;
    cout<<optimizedraintrapped(arr,5)<<endl;
    return 0;
}
