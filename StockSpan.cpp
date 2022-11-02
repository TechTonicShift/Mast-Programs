#include <bits/stdc++.h>

using namespace std;

void naive(int arr[],int n){
    
    for(int i=0;i<n;i++){
    int res=1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<=arr[i]){
                res++;
            }
        }
        cout<<arr[i]<<" "<<res<<endl;
    }
    
    
}

void stackapproach(int arr[],int n){
    stack <int> s;
    s.push(arr[0]);
    cout<<arr[0]<<" 1"<<endl;
    for(int i=1;i<n;i++){
        
        while(s.empty()==false && arr[s.top()]<arr[i]){
            s.pop();
        }
        int res= s.empty() ? i+1: i-s.top();
        cout<<arr[i]<<" "<<res<<endl;
        s.push(arr[i]);
    }
}
int main()
{
    //Stock span problem 
    int arr[]={13,15,12,14,16,8,6,4,10,30};
    
    int n=10;
    // naive(arr,n);
    stackapproach(arr,n);
    
    return 0;
}
