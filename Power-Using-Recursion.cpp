#include <iostream>

using namespace std;
int powerRec(int a, int b){
    if(b>0){
    return powerRec(a,b-1)*a;
    }
    return 1;
}

int main()
{
    //Find a raised to power b using recursion function
    std::cout << powerRec(2,10) << std::endl;
    return 0;
}
