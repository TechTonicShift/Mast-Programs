#include <iostream>

using namespace std;

void mergetwosortedarr(int a[],int b[],int m,int n){
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(a[i]<=b[j]){
           cout<<a[i]<<" ";
           i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
        
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}

int main()
{
    //Write a program to merge two sorted array 
    int arr1[]={10,15,20};
    int arr2[]={5,6,6,15};
    int m=3;
    int n=4;
    mergetwosortedarr(arr1,arr2,m,n);
    return 0;
}
