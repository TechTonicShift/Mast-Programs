#include <iostream>

using namespace std;


int main()
{
  //Write a program to check for palindrome number
  int n;
  cin>>n;
  int rev=0;
  while(n>0){
      int rem= n%10;
      rev= rev*10 + rem;
      n=n/10;
  }
  if((n)==(rev)){
      cout<<"palindrome"<<endl;
  }
  else{
      cout<<"Not a palindrome"<<endl;
  }
    
  

    return 0;
}
