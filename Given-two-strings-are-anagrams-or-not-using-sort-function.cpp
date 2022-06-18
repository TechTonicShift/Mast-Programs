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

int anagOrnot(char arr[], char arr2[]){
    int n1=strlength(arr);
    int n2= strlength(arr2);
    if(n1!=n2){
        return 0;
    }
    sort(arr,arr+strlength(arr)-1);
    sort(arr2,arr2+strlength(arr)-1);
    for(int i=0; i<n1; i++){
        if(arr[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
    
}

int main()
{
    //Write a function to find whether the two given strings are anaagrams or not
    char arr[]="decimal";
    char arr2[]="medical";
    
    std::cout << anagOrnot(arr,arr2) << std::endl;

    return 0;
}
