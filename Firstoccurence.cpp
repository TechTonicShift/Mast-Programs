#include <iostream>

using namespace std;

int firstoccurence(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int firstoccurenceoptimizedusingbinarysearch(int arr[],int n,int key,int start,int end){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(key>arr[mid]){
        return firstoccurenceoptimizedusingbinarysearch(arr,n,key,mid+1,end);
    }
    else if(key<arr[mid]){
        return firstoccurenceoptimizedusingbinarysearch(arr,n,key,start,mid-1);
    }
    
    else{
        if(n==0 || arr[mid-1]!=arr[mid]){
        return mid;
        }
        else{
            return firstoccurenceoptimizedusingbinarysearch(arr,n,key,start,mid-1);
        }
    }
  
}

int firstoccurenceoptimizedusingiterativebinarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            if(n==0 || arr[mid-1]!=arr[mid]){
                return mid;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    //Write a program to find index of first occurence in a sorted array 
    int arr[]={5,10,10,15,20,20,20};
    int n=7;
    int key=20;
    cout<<firstoccurence(arr,n,key)<<endl;
    cout<<firstoccurenceoptimizedusingbinarysearch(arr,n,key,0,n-1)<<endl;
    cout<<firstoccurenceoptimizedusingiterativebinarysearch(arr,n,key)<<endl;
    return 0;
}
