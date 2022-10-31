#include <iostream>

using namespace std;

int firstoccurence(int arr[],int n,int key){
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

int lastoccurence(int arr[],int n,int key){
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

int occurences(int arr[],int n, int key){
    int first=firstoccurence(arr,n,key);
    int last=lastoccurence(arr,n,key);
    int num=last-first+1;
    if(num<0){
        return -1;
    }
    else{
        return num;
    }
}
int main()
{
    //Write a program to count number of occurences of an element in a sorted array
    int arr[]={5,10,10,10,10,20,20};
    int key=10;
    int n=7;
    cout<<occurences(arr,n,key)<<endl;
    return 0;
}
