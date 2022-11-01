#include <iostream>

using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    //Implement selection sort(selecting the minimum and placing at first) 
    int arr[]={90,80,90,25};
    int n=4;
    selectionsort(arr,n);
    //TIme complexity O(n-square)
    return 0;
}
