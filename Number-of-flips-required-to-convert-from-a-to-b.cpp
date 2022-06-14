
#include <iostream>

using namespace std;

int main()
{
    //Find number of bits to be changed to convert from integer a to integer b
    int a;
    int b;
    cin>>a>>b;
    int req_count=0;
    int num= a^b;
    int bin=0;
    //Now count number 
    for(int i=31; i>=0; i--){
        int mask= (1<<i);
        if((num&mask)!=0){
            bin++;
        }
    }
    cout<<bin<<endl;

    return 0;
}
