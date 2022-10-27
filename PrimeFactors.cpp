#include <iostream>

using namespace std;

bool isPrime(int n){
    bool res=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            res=false;
        }
    }
    return res;
}
void basic(int n){
    for(int i=2;i*i<=n;i++){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x*=i;
            }
        }
    }
}

void optimized(int n){
    if(n<=1)
    return;
    while(n%2==0){
        cout<<"2"<<" ";
        n/=2;
    }
    while(n%3==0){
        cout<<"3 ";
        n/=3;
    }
    for(int i=5;i*i<=n;i+=6){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        while(n%(i+2)==0){
            cout<<(i+2)<<" ";
            n/=(i+2);
        }
    }
    if(n>3){
        cout<<n<<" ";
    }
}
int main()
{
    //Write a program to find prime factorization
    int n;
    cin>>n;
    optimized(n);
    cout<<endl;
    basic(n);

    return 0;
}

