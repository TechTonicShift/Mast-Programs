#include <iostream>

using namespace std;

struct stack{
    int *arr;
    int top;
    int cap;
    stack(int limit){
        cap=limit;
        arr=new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap-1){
            cout<<"stack overflow"<<endl;
            return;
        }
    arr[++top]=x;
    }
    
    int pop(){
        if(top==-1){
            return -1;
        }
        int res=arr[top--];
        return res;
    }
    int peek(){
        if(top==-1){
            return -3;
        }
        return arr[top];
    }
    
    int size(){
        return (top+1);
    }
    bool isempty(){
        
        return (top==-1);
    }
    // bool isFull(){
    //     return (top==limit-1);
    // }
    void printstack(){
        while(top!=-1){
            int a=pop();
            cout<<a<<endl;
            top--;
        }
    }
};
//End of stack struct 
//This function should also handle corner cases like overflow and underflow


//How do we Implement a stack which dynamically grows and shrinks automatically as we add or remove elements
//AnsweR: WE can use vector class of C++ STL instead of array 
int main()
{
    //Implement a stack using an array 
    stack s(5);
    s.push(5);
    s.push(20);
    s.push(12);
    // cout<<s.pop()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.peek()<<endl;
    // cout<<s.isempty()<<endl;
    s.printstack();
    return 0;
}

