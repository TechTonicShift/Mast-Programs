#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void zeroestoright(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
        for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
            }
        }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void optimizedZeroesToRight(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
   //Write a program to shift all zeroes to right in an array keeping the other's order intact
   int arr[]={10,5,0,0,8,0,9,0};
   int n=8;
   zeroestoright(arr,n);
   cout<<endl;
    cout<<"NEXT"<<endl;
    optimizedZeroesToRight(arr,n);
    return 0;
}
