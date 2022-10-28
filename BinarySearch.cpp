#include <iostream>

using namespace std;

int recursiveBinarySearch(int arr[],int start,int end,int key){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(key==arr[mid]){
        return mid;
    }
    else if(key>arr[mid]){
        return recursiveBinarySearch(arr,start,mid-1,key);
    }
    else{
         return recursiveBinarySearch(arr,mid+1,end,key);
    }
}
int main()
{
    //Write recursive Binary search
    int arr[]={1,2,3,4,56,7};
    int key=3;
    cout<<recursiveBinarySearch(arr,0,5,key);
    return 0;
}
