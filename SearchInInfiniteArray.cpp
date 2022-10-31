
#include <iostream>

using namespace std;

int binarysearch(int arr[],int key,int start,int end){
    if(start>end){
        return -1;
    }
    else{
        int mid=(start+end)/2;
        if(arr[mid]>key){
            return binarysearch(arr,key,mid+1,end);
        }
        else if(arr[mid]<key){
            return binarysearch(arr,key,start,mid-1);
        }
        else{
            return mid;
        }
    }
}

int searchininfinitesorted(int arr[],int key,int start){
    if(arr[0]==key){
        return 0;
    }
    else{
        int i=1;
        while(arr[i]<key){
            i*=2;
        }
        if(arr[i]==key){
            return i;
        }
        else{
            return binarysearch(arr,key,i/2+1,i-1); //Now we know in what field we need to use binary search
        }
    }
}
int main()
{
    //Write a program to search in an infinite sorted array 

    return 0;
}
