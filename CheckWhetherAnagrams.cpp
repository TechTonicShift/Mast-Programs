#include <bits/stdc++.h>

using namespace std;

const int CHAR=256;
bool isanag(string s1,string s2){
    if(s1.length()!=s2.length()){
        return 0;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}

bool optimizedAnagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        return 0;
    }
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<n;i++){
        if(count[i]!=0){
            return 0;
        }
    }
    return true;
}

int main()
{
    //We are given 2 strings, we have to check whether these 2 are anagrams of each other
    

    return 0;
}
