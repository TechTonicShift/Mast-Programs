#include <bits/stdc++.h>

using namespace std;

void Sieve(int n){
    vector <bool> isprime(n+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=2*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
    
}

void optimizedseive(int n){
      vector <bool> isprime(n+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
}

int main()
{
     //Write the code for sieve of eratosthenes
    //Or print all prime numbers between 1 to n
    
    int n;
    cin>>n;
    Sieve(n);
    cout<<endl;
    optimizedseive(n);
    return 0;
}
