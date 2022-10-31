#include <iostream>

using namespace std;

int supernaive(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
  
}

int optimized(int arr[],int n){
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        if(visited[arr[i]]){
            return arr[i];
        }
        visited[arr[i]]=true;
    }
}
int main()
{
    //Write a program to find the repeating elements of the given array given that only one of the element repeats any number of times
    int arr[]={0,2,1,3,2,2};
    int n=6;
    cout<<optimized(arr,n)<<endl;
    cout<<supernaive(arr,n)<<endl;
    return 0;
}
