#include <iostream>

using namespace std;

int numberofsubsets(int arr[],int n,int sum){
    if(n==0){
        return (sum==0)?1:0;
    }
    return numberofsubsets(arr,n-1,sum)+numberofsubsets(arr,n-1,sum-arr[n-1]);
}
int main()
{
    //Write a program to find number of subsets in an array that result in a given sum
    int arr[]={10,20,15};
    int n=3;
    int sum=25;
    cout<<numberofsubsets(arr,n,sum);
    return 0;
}
