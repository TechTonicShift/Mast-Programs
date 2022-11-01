#include <iostream>

using namespace std;

void findintersection(int a[],int b[],int m,int n){
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    //Write a program to find intersection between 2 sorted arrays
    int arr1[]={3,5,10,10,10,15,15};
    int n1=7;
    int arr2[]={5,10,10,15,30};
    int n2=5;
    findintersection(arr1,arr2,n1,n2);
    return 0;
}
