#include <iostream>

using namespace std;

void frequency(int arr[],int n){
    int i=1;
    
    while(i<n){
        int freq=1;
        while(i<n && arr[i-1]==arr[i]){
            i++;
            freq++;
        }
        cout<<arr[i-1]<<" freq: "<<freq<<endl;
        i++;
        freq=1;
    }
    
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" freq: 1";
    }
}

int main()
{
    //Write a program to find frequency of all elements of an array 
    int arr[]={10,10,10,20,20,30};
    frequency(arr,6);

    return 0;
}
