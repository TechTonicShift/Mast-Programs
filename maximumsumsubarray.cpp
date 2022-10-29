
#include <iostream>

using namespace std;

int maximumsumsubarray(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[i];
            res=max(res,curr);
        }
    }
    return res;
}

int main()
{
    //Maximum sum subarray
    int arr[]={1,-2,3,-1,2};
    cout<<maximumsumsubarray(arr,5)<<endl;
    return 0;
}
