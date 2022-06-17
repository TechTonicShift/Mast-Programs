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

void ReversedString (char arr[]){
    char rev[1000];
    int start=0;
    int end=strlength(arr)-1;
    for(int i=0; i<strlength(arr);i++){
        rev[start]=arr[end];
        start++;
        end--;
    }
    rev[strlength(arr)]='\0';
    std::cout << rev << std::endl;
}
int main()
{
    //Write a function to reverse a string or print a reversed string of a given string
    char test[]="HEYBABY How are you?";
    ReversedString(test);
    return 0;
}
