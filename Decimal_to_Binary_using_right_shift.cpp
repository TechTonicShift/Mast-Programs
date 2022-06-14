#include <iostream>

using namespace std;

int main()
{
    //Checking whether the number is odd or even using bits
    int n;
    cin>>n;
    //Decimal to binary conversion using right shift
    for(int i=31; i>=0; i--){
        int finbit= n>>i;
        if(finbit&1){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }

    return 0;
}
