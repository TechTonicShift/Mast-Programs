#include <iostream>

using namespace std;

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

int numberofones(int arr[],int n,int key){
    int first= firstoccurenceoptimizedusingiterativebinarysearch(arr,n,key);
    int occ= n-first;
    return occ;
}
int main()
{
    //Count the number of 1's in a sorted binary array given that the array contains only 1's and 0's
    int arr[]={0,0,1,1,1,1,1};
    int key=1;
    int n=7;
    cout<<numberofones(arr,n,key)<<endl;

    return 0;
}
