#include <iostream>

using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){     //j till n-2 because we are comparing arr[j+1] here, finally it'll lead to arr[n-1]
            if(arr[j]>arr[j+1]){    
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void optimizedbubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){   /*After i'th iteration, i elements are fixed to the rightmost correct positions
            that is the ith largest elements so we don't even need to go to that side.
            You can dry run to understand better*/
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void ultraoptimizedBubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swap=true;
            }
        }
        if(swap==false){
            break;  //No swaps required at the current iteration this implies that the array has became sorted, no more iterations to be considered
        }
    }
}

int main()
{
    //Write a program for bubble sort
    //Remember: n-1 iterations/checks for the same array
    int arr[]={10,8,20,5};
    int n=4;
    bubblesort(arr,n);
    cout<<endl;
    optimizedbubble(arr,n);
    cout<<endl;
    ultraoptimizedBubble(arr,n);
    return 0;
}
