#include <bits/stdc++.h>

using namespace std;

bool isPair(char a, char b){
    return ((a=='[' && b==']') || (a=='{' && b=='}') || (a=='(' && b==')'));
}

bool isBalanced(string str){
    stack <int> s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='{' || str[i]=='(' || str[i]=='('){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true){
                return false;
            }
            else if(isPair(s.top(),str[i])==false){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}
int main()
{
    //Paranthesis matching using stack / check whether all Paranthesis are matched/closed or not 
    string s="{[()]}";
    cout<<isBalanced(s)<<endl;

    return 0;
}
