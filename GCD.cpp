#include <iostream>

using namespace std;

int GCD(int a, int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main()
{
    //Write a function to find out GCD
    //Property of GCD is GCD(a,b)= GCD(b,a%b)
    
    int ans= GCD(15,27);
    cout<<ans<<endl;
    return 0;
}
