
#include <iostream>

using namespace std;

int main()
{
    
    //Changing the ith bit of number (if it's 1 then change it to 0 and vice versa)
    int n;
    cin>>n;
    //Example set the 3rd bit from last in n;
    int mask= (1<<3);
    //mask= (1<<i), if we need to find the ith bit
    if((n&mask)==0){
        int mask2= (1<<3);
        n=n|mask2;
        cout<<n<<endl;
    }
    else{
        int mask2= ~(1<<3);
        n= n&mask2;
        cout<<n<<endl;
    }

    return 0;
}
