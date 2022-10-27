#include <iostream>
#include <cmath>
using namespace std;

void powerset(string s){
    int size=s.length();
    int n= pow(2,size);
    for(int i=0;i<n;i++){
        for(int j=0;j<size;j++){
            if((i&(1<<j))!=0){
                cout<<s[j];
            }
        }
            cout<<endl;
        
    }
}

int main()
{
    //Write a program to find out the power set of a given string using bitwise operators
    //Note: The program should be iterative
    string s="abc";
    powerset(s);

    return 0;
}

