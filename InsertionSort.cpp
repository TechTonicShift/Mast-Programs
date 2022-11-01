#include <iostream>

using namespace std;


void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j]; //Shifting elements to the right by 1
            j--;
        }
        arr[j+1]=key; //Due to last j-- of the loop we have to do j+1
    }
    
    //Now print the sorted array 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    //Implement insertion sort (an algorithm where we consider the i indexes as sorted and then include i+1 th index and make the subarray as sorted)
    //Insertion sort is used when size/length of array is small (used in timsort too)
    int arr[]={20,5,40,60,10,30};
    int n=6;
    insertionsort(arr,n);
    return 0;
}
