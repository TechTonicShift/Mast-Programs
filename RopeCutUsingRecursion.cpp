
#include <bits/stdc++.h>

using namespace std;

int maxpiece(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res= max(maxpiece(n-a,a,b,c),maxpiece(n-b,a,b,c),maxpiece(n-c,a,b,c));
    if(res==-1){
        return -1;
    }
    return res+1;
}
int main()
{
    //Write a program to find maximum number of ways to cut a rope into permissible given length segments
    cout<<maxpiece(23,11,9,12)<<endl;

    return 0;
}
