#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,0,0,1,1,1,0,0,1,1,0,1,0,1,0};
    int one = 0;
    int zero = 0;
    for (int i = 0; i < 16; i++)
    {
        if(arr[i]==1){
            one++;
        }else{
            zero++;
        }
    }
    cout<<zero<<endl;
    cout<<one<<endl;
    return 0;
}