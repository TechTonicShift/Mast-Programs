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

void Vowelandconsonant(char arr[]){
    int vowel=0;
    int consonant=0;
    for(int i=0; i<strlength(arr);i++){
           if(arr[i]==97 || arr[i]==101 || arr[i]==105 || arr[i]==111|| arr[i]==117 || arr[i]==65 || arr[i]==69 || arr[i]==73 || arr[i]==79 || arr[i]==85){
               vowel++;
           }
           else if(arr[i]<=122 && arr[i]>=65){
               consonant++;
           }
        }
    
  std::cout <<"There are "<<vowel<<" and "<<consonant<< " consonants" << std::endl;
}

int main()
{
    //Write a function to count words and vowels in a string
    char test[]="How are you?";
    Vowelandconsonant(test);

    return 0;
}
