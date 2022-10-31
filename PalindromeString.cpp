#include <iostream>
#include <algorithm>
using namespace std;

bool ispalin(string s){
    string rev=s;
    reverse(rev.begin(),rev.end());
    return (rev==s);
}

bool ispal(string s){
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    //Write a program to check whether given string is palindrome
    string s="ABBA";
    cout<<ispalin(s)<<endl;
    cout<<ispal(s)<<endl;

    return 0;
}
