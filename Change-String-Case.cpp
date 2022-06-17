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

void changecase(char arr[]){
    for(int i=0; i<strlength(arr);i++){
            if(arr[i]<=122 && arr[i]>=97){
                arr[i]=char(arr[i]-32);
            }
            else{
                arr[i]=char(arr[i]+32);
            }
        }
    
  std::cout << arr << std::endl;
}

int main()
{
    //Write a function to change the case of string
    char test[]="JOhN";
    changecase(test);

    return 0;
}
