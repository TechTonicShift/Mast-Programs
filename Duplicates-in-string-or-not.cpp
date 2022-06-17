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

bool Duplicacy(char arr[]){
    for(int i=0; i<strlength(arr);i++){
        for(int j=i; j<strlength(arr);i++){
            if(arr[i]==arr[j]){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    //Write a function to check whether duplicates exists or not in a string
    char test1[]="Hello";
    std::cout << Duplicacy(test1) << std::endl;
    
    return 0;
}
