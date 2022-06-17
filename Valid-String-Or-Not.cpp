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

bool StrValidOrNot(char arr[]){
    for(int i=0;i<strlength(arr);i++){
        if(!(arr[i]>=65 && arr[i]<=90)&&!(arr[i]>=97 && arr[i]<=122)&&!(arr[i]>=48 && arr[i]<=57)){
            return 0;
            
        }
    }
    return 1;
}

int main()
{
    //Write a function to check whether a string is valid or not?
    //Valid string is the one which only have small and upper case alphabets and no special charaacters, Numbers can also be included
    char test[]="Johnny1211";
    char test2[]="Joh<ny1211";
    std::cout << StrValidOrNot(test) << std::endl;

    return 0;
}
