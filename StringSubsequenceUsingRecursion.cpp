#include <bits/stdc++.h>

using namespace std;

void subsequences(char s[], char curr[],int i,int size){
    if(i==size){
       cout<<s<<endl;
        return;
    }
     
    subsequences(s,curr,i+1,size);
    subsequences(s,curr+s[i],i+1,size);
}
int main()
{
    //Write a program to find subsequences of a string recursively
    char s[]="abc";
    subsequences(s," ",0,3);

    return 0;
}
