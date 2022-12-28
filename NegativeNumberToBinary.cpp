#include <bits/stdc++.h>

using namespace std;

int main()
{
    //COde to convert a negative number into binary
    int n;
    cin>>n;
    if(n<0){
        int a=-1*n;
        int b=~(a) + 1;
        string str="";
        for(int i=0;i<=32;i++){
            if(b&1){
                str+="1";
            }
            else{
                str+="0";
            }
            b>>=1;
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    else{
        cout<<"Please insert a negative number";
    }
    

    return 0;
}
