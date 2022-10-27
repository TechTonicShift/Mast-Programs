#include <iostream>

using namespace std;

void FindingElements(int arr[],int n){
    int xor1=0;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        xor1^=arr[i];
    }
    int rightmostsetbit=(xor1)&~(xor1-1);
    for(int i=0;i<n;i++){
        if(rightmostsetbit&arr[i]){
            x^=arr[i];
        }
        else{
            y^=arr[i];
        }
    }
    cout<<x<<" and "<<y<<endl;
}
int main()
{
    //You are given an array in which 2 elements don't repeat even times while others repeat even times
    //Write a program to find those elements
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    FindingElements(arr,n);

    return 0;
}
