#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Stack in C++ STL 
    stack <int> s;
    s.push(50);
    s.push(25);
    s.push(5);
    s.push(1);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    // s.pop();
    cout<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    //Time complexities: push(), pop(), top(),size(),isempty() ==> ALl these operations have O(1)
    return 0;
}
