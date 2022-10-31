#include <iostream>

using namespace std;

int peak(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
    int mid=(start+end)/2;
    if((mid==0 || arr[mid-1]<arr[mid] )&& (mid==n-1 || arr[mid]>arr[mid+1])){
        return mid;
    }
    else if(mid!=0 && arr[mid-1]>arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    }
    return -1;
    
    
}
int main()
{
    //Find peak element in an unsorted array using binary search concept
    
    int arr[]={5,20,40,30,20,50,60};
    int n=7;
    cout<<peak(arr,7)<<endl;
    return 0;
}
