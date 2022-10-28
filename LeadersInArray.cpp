#include <iostream>

using namespace std;

void leader(int arr[],int n){
    
    for(int i=0;i<n;i++){
        bool is_lead=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                is_lead=false;
                break;
            }
        }
        if(is_lead){
            cout<<arr[i]<<endl;
        }
    }
    
}

void optimizedLeader(int arr[],int n){
    int leader=arr[n-1];
    cout<<leader<<endl;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            leader=arr[i];
            cout<<leader<<endl;
        }
    }
}
int main()
{
    //Write a program to find leaders of an array (means it should be greater than all the elements to the right of it)
    int arr[]={7,10,4,10,6,5,2};
    int n=7;
    leader(arr,n);
    cout<<"Next"<<endl;
    optimizedLeader(arr,n);
    return 0;
}
