#include <iostream>

using namespace std;


int main()
{
  
    
    //Write a program to find number of trailing zeroes in a factorial
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        n=n/5;
        sum+=n;
    }
    cout<<sum<<endl;

    return 0;
}
