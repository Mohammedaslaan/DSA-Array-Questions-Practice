#include <iostream>
using namespace std;
void Transpose(int arr[][3],int r,int c,int transpose[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = arr[i][j];
        }
        
    }
}
void Print(int arr[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cin>>arr[i][j];
        }
        
    }
    int r = 3;
    int c = 3;
    int ans[3][3];
    Transpose(arr,r,c,ans);
    Print(ans);

    
    
    return 0;
}