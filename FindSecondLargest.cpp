#include <iostream>

using namespace std;

int findmax(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[max]){
            max=i;
            
        }
    }
    return max;
}

int findsecondmax(int arr[],int n){
    int max=arr[findmax(arr,n)];
    // arr[max]=-10000;
    // int j=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>arr[j]){
    //         j=i;
    //     }
    // }
    // return arr[j];
    int m=-10000;
    for(int i=0;i<n;i++){
        if(arr[i]!=max){
            if(arr[i]>m){
                m=arr[i];
            }
        }
    }
    return m;
}


void optimizedSecondmax(int arr[],int n){
    
}
int main()
{
    //Write a program to find second highest values element in an array
    int arr[]={5,20,12,20,10};
    int n=5;
    cout<<findsecondmax(arr,n)<<endl;

    return 0;
}
