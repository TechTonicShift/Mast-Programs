#include <iostream>

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

int SameOrNot(char arr[], char arr2[]){
    if(strlength(arr)!=strlength(arr2)){
        return 0;
    }
    int comp=0;
    for(int i=0; i<=strlength(arr);i++){
        if(arr[i]==arr2[i]){
            comp++;
        }
        
    }
    if(comp=strlength(arr)){
        return 1;
    }
    return 0;
}
int main()
{
    //Write a function to compare strings or check for palindrome
    char test1[]="Hello";
    char test2[]="Hello";
    std::cout << SameOrNot(test1,test2) << std::endl;
    return 0;
}
