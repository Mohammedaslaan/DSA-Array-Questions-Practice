#include <iostream>
using namespace std;

int main(){
    int n = 5689;

    while (n)
    {
        cout<<"Digit - "<<(n%10)<<endl;
        n = n/10;
    }
    
    
    return 0;
}