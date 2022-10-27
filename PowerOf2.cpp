#include <iostream>

using namespace std;

bool powoftwo(int n){
    int ct=0;
    while(n>0){
        if(n&1){
            ct++;
        }
        n>>=1;
    }
    if(ct==1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    //Write a program to check whether a number is a power of 2 or not
    int n;
    cin>>n;
    cout<<powoftwo(n)<<endl;

    return 0;
}
