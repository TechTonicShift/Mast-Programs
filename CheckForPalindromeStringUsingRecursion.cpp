#include <iostream>

using namespace std;

bool isPalindrome(string s,int start,int end){
    if(start>=end){
        return true;
    }
    else{
        return((s[start]==s[end])&&(isPalindrome(s,start+1,end-1)));
    }
}

int main()
{
    //Write a program to find whether the string is a palindrome of not, recursively
    string s="abbc";
    cout<<isPalindrome(s,0,3)<<endl;
    return 0;
}
