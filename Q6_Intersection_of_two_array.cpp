#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a{1,2,3,3,4,6,8};
    vector<int> b{3,4,10};
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
           if(a[i]==b[j]){
            ans.push_back(a[i]);
            b[j] = -1;
           }
        }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}