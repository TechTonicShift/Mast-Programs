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

int main()
{
    //Write a function to find length of string
    char name[]= "John";
    std::cout << strlength(name) << std::endl;

    return 0;
}
