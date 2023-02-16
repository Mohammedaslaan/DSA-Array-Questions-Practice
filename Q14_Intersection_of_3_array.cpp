#include <iostream>
#include <vector>
using namespace std;
int main(){
    int A[] = {1, 5, 10, 20, 40, 80};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> ans;
            for(int i = 0 ; i<n1 ; i++){
                int a = A[i];
                for(int j = 0 ; j<n2 ; j++){
                    if(B[j] == a){
                        for(int k = 0 ; k < n3 ; k++){
                            if(C[k] == a){
                                
                                ans.push_back(a);
                            }
                        }
                    }
                }
            }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}