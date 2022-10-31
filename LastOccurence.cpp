#include <iostream>

using namespace std;

int lastoccurence(int arr[],int n,int key,int start,int end){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(key>arr[mid]){
        return lastoccurence(arr,n,key,mid+1,end);
    }
    else if(key<arr[mid]){
        return lastoccurence(arr,n,key,start,mid-1);
    }
    else{
        if(mid==n-1 || arr[mid]!=arr[mid+1]){
            return mid;
        }
        else{
            lastoccurence(arr,n,key,mid+1,end);
        }
    }
    

    
}

int lastoccurenceiterative(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
    int mid=(start+end)/2;
    if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid])
        {
            end=mid-1;
        }
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                start=mid+1;
            }
        }
    }
    return -1;
    
}

int main()
{
    //Write a program to find last occurence of an element in a sorted array
    int arr[]={5,10,10,15,20,20,20};
    int n=7;
    int key=20;
    cout<<lastoccurence(arr,n,key,0,n-1)<<endl;
    cout<<lastoccurenceiterative(arr,n,key)<<endl;
    return 0;
}
