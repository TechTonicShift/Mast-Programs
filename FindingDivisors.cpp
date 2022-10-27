#include <iostream>

using namespace std;

void naive(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

void optimized(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=(n/i)){
                cout<<(n/i)<<" ";
            }
        }
    }
    //Optimized approach but not in sorted order
}

void optimizedandsorted(int n){
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for( ;i>=1;i--){
        if(n%i==0){
            cout<<(n/i)<<" ";
        }
    }
    
}
int main()
{
    //Print all the divisors of given number in sorted order
    int n;
    cin>>n;
    naive(n);
    cout<<endl;
    optimized(n);
    cout<<endl;
    optimizedandsorted(n);

    return 0;
}
