
#include <bits/stdc++.h>

using namespace std;

int strlength(char arr[]){
    int index=0;
    int length=0;
    while(arr[index]!='\0'){
        length++;
        index++;
    }
    return length;
}

void powerset(char s[], int i, string current){
    if(i==strlength(s)){
        cout<<current<<endl;
        return;
    }
    powerset(s,i+1,current+s[i]);
    powerset(s,i+1,current);
}


int main()
{
    char test[]="abc";
    powerset(test,0,"");

    return 0;
}
