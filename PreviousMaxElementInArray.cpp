#include <bits/stdc++.h>

using namespace std;

void naiveprevmax(int arr[],int n){
    int prev=-1;
    for(int i=0;i<n;i++){
        bool isfound=false;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                isfound=true;
                break;
            }
            
        }
        if(!isfound){
            cout<<"-1 ";
        }
    }
    
}

void prevmaxusingstack(int arr[],int n){
    stack <int> st;
    st.push(arr[0]);
    cout<<"-1 ";
    for(int i=1;i<n;i++){
        while(st.empty()==false && arr[st.top()]<=arr[i]){
            st.pop();
        }
            int pg= (st.empty())? -1: arr[st.top()];
            cout<<pg<<" ";
            st.push(arr[i]);
        }
    }

int main()
{
    //If we are pushing an element in the array then find out the previous maximum element in the array 
    int arr[]={20,30,10,5,15};
    int n=5;
    naiveprevmax(arr,n);
    cout<<endl;
    prevmaxusingstack(arr,n);
    return 0;
}


