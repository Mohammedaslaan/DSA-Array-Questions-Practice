#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<(sizeof(arr) / sizeof(int))<<endl;
    return 0;
}