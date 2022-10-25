#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //Make a program to find maximum repeating character in a string
    string s;
    cin>>s;
    int charac[26]={0};
    char result;
    
    for(int i=0;i<s.size();i++)
    {   int idx= s[i]-'a';
        charac[idx]++;
    }
    int max=charac[0];
    for(int i=0;i<26;i++){
        if(charac[i]>max){
            max=charac[i];
            result='a'+i;
        }
    }
    
    cout<<result<<endl;

    return 0;
}
