#include <iostream>

using namespace std;

int main()
{
    //Print fibonnacci series iteratively
    int a=0;
    int b=1;
    int n;
    cin>>n;
    int nextnum;
    if(n==1){
        cout<<"0"<<endl;
    }
    else if(n==2){
        cout<<"1"<<endl;
    }
    for(int i=3;i<=n;i++){
        if(n<3){
            break;
        }
        else{
            nextnum=a+b;
            a=b;
            b=nextnum;
        }
        
    }
    cout<<nextnum<<endl;
    

    return 0;
}
