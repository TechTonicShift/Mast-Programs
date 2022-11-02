#include <bits/stdc++.h>
using namespace std;

struct mystack{
  vector <int> v;
  void push(int x){
      v.push_back(x);
  }
  int pop(){
      int x=v.back();
      v.pop_back();
      return x;
  }
  int size(){
      return v.size();
  }
  bool isEmpty(){
      return (v.size()==0);
  }
  int peek(){
      return v.back();
  }
  void print(){
      while(!isEmpty()){
          cout<<peek()<<endl;
          pop();
      }
  }
};
int main()
{
    //Stack implementation using vector stl 
    mystack s;
    s.push(50);
    s.push(25);
    s.push(5);
    s.print();
    return 0;
}

