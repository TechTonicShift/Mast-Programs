#include <iostream>

using namespace std;

int sqroot(int n){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(mid*mid>n){
            end=mid-1;
        }
        else if(mid*mid==n){
            return mid;
        }
        else{
            start=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main()
{
    //Write a program to find square root of a number using binary search
    cout<<sqroot(25)<<endl;
    cout<<sqroot(37)<<endl;
    

    return 0;
}
