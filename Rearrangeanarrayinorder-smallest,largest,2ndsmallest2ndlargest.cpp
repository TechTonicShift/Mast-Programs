#include <bits/stdc++.h>

using namespace std;

//First we will sort the array, then we will take two pointers i and j 
// i will be in the starting and j at the end 
// i will increase and j will decrease, we will print arr[i] and arr[j]

void order(int arr[],int n){
    int i=0;
    int j=n-1;
    sort(arr,arr+n);
    while(i<=j){
        cout<<arr[i]<<" "<<arr[j]<<" ";
        i++;
        j--;
    }
}
int main()
{
    //Rearrange an array in order – smallest, largest, 2nd smallest, 2nd largest, ..
    int arr[] = { 5, 8, 1, 4, 2, 9, 3, 7, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    order(arr,n);

    return 0;
}
