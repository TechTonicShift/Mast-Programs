#include <iostream>

using namespace std;

bool issubs(string s1,string s2,int n,int m){
    int ct;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s1[i]==s2[j]){
                ct++;
            }
        }
        
    }
    return (ct==m);
    
}
int main()
{
      //Check whether the given string is subsequence of other string or not
      string s1="ABCD";
      string s2="AE";
      int n=4;
      int m=2;
      cout<<issubs(s1,s2,n,m)<<endl;

    return 0;
}
