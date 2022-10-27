#include <iostream>

using namespace std;

void naive(int a,int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res*=a;
    }
    cout<<res<<endl;
}

int RecursivePower(int a,int n){
    // pow(a,n)==pow(a,n/2)*pow(a,n/2)-->if n is even
    // pow(a,n)==pow(a,n-1)*a---> if n is odd
    
    if(n==0){
        return 1;
        
    }
    
    int temp=RecursivePower(a,n/2);
    temp*=temp;
    if(n%2==0){
        return temp;
    }
    else{
        return temp*a;
    }
}


int main()
{
    //Write a program to compute a raised to power n
    int a,n;
    cin>>a>>n;
    naive(a,n);
    cout<<RecursivePower(a,n)<<endl;

    return 0;
}
