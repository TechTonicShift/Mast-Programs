#include <iostream>

using namespace std;


int iterativepow(int x,int n){
    int res=1;
    while(n>0){
        if((n&1)!=0){ 
            res*=x; //If set bit then multiply it with weight of that position
        }
        x*=x;   //Increasing weight by every position
        n=n>>1; //Shifting bits to right by 1
    }
    return res;
}
int main()
{
    //Write a program to find power of a number iteratively
    int a,n;
    cin>>a>>n;
    cout<<iterativepow(a,n)<<endl;
    

    return 0;
}
