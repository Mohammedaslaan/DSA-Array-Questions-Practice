#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a{1,2,4,6,8,10};
    vector<int> b{3,5,4,6};
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if(a[i]==b[j]){
                b[j] = -1;
            }
        }
        
    }
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {   if(b[i] != -1){
        ans.push_back(b[i]);
    }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
       cout<<ans[i]<<" ";
    }
    
    
    
    
    return 0;
}