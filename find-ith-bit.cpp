
#include <iostream>

using namespace std;

int main()
{
    //Finding Ith bit in a number
    int n;
    cin>>n;
    //Find 3rd bit from last in n;
    int mask= (1<<3);
    //mask= (1<<i), if we need to find the ith bit
    if((n&mask)==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }

    return 0;
}
