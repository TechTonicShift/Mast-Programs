#include <iostream>

using namespace std;

int main()
{
    //In a given array, every element occurs in duplicate to itself except a unique one. Find that element
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int num=0;
    for(int i=0; i<n; i++){
        num= num^arr[i];
    }
    cout<<num<<endl;

    return 0;
}
