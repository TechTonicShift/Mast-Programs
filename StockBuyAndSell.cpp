#include <iostream>

using namespace std;


// int recursivemaxprof(int arr[],int n){
    
// }

int maxprof(int arr[],int n){
    int prof=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            prof+=arr[i]-arr[i-1];
        }
    }
    return prof;
}

int main()
{
    //Given the all the upcoming days' share prices, your job is to find maximum profit that we can earn 
    int arr[]={1,5,3,8,12};
    cout<<maxprof(arr,5)<<endl;
    return 0;
}
