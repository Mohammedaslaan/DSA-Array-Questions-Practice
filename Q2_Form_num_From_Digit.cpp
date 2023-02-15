#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,6,8,9};
    int ans = 0;
    int i = 0;
    while(i<4){
        ans = ans*10+arr[i];
        i++;
    }
    cout<<ans;

    return 0;
}