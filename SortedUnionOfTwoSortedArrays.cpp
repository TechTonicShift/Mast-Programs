#include <iostream>

using namespace std;

void unionbetweenarrays(int a[],int b[],int m,int n){
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        else if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        else if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
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
    //WRite a program to find union between two arrays 
    int arr1[]={2,10,20,20};
    int n1=4;
    int arr2[]={3,20,40};
    int n2=3;
    unionbetweenarrays(arr1,arr2,n1,n2);

    return 0;
}
