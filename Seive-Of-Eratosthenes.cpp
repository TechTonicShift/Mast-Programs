#include <iostream>

using namespace std;

void seiveofEratothenes(int n){
    bool isPrime[n+1];
    for(int i=0; i<=n;i++){
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2; i*i<=n; i++){
        for(int j=2*i; j<=n; j+=i){
            isPrime[j]=false;
        }
    }
    for(int i=0; i<=n;i++){
        if(isPrime[i]){
            cout<<i<<endl;
        }
    }
}


int main()
{
  //Sieve of eratosthenes
  seiveofEratothenes(12);

    return 0;
}
