#include <iostream>

using namespace std;

void removeDups(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=temp[count-1]){
             temp[count]=arr[i];
             count++;
        }
    }
    
    for(int i=0;i<count;i++){
        cout<<temp[i]<<" ";
    }
}

int optimizedRemovedups(int arr[],int n){
        int res=1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[res-1]){
                arr[res]=arr[i];
                res++;
            }
        }
        return res;
}

int main()
{
    ///Write a program to remove duplicates from an array
    int arr[]={10,20,20,30,30,30,30};
    removeDups(arr,7);
    cout<<endl;
    cout<<optimizedRemovedups(arr,7)<<endl;
    return 0;
}
