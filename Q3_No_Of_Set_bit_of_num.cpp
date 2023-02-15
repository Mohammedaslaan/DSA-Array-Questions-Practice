#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int arr[100];
    memset(arr,5,100);
    for (int i = 0; i < 100; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}