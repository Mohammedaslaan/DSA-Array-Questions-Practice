#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> a{1,3,5,7};
    vector<int> b{2,4,6};
    int sum = 9;
    vector<vector<int>> ans;
    for (int i = 0; i < a.size(); i++)
    {
        int ser = sum - a[i];
        for (int j = 0; j < b.size(); j++)
        {
            if(b[j]==ser){
                vector<int> p{a[i],b[j]};
                ans.push_back(p);
            }
        }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        
    }
    
    
    

    
    
    
    return 0;
}