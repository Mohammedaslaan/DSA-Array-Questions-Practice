#include <iostream>
using namespace std;
long long int mySqrt(int x) {
    int s = 0;
    int e = x;
    long long int  mid = s + (e-s)/2;
    long long int  ans = -1;
    while(s<=e){
        long long int sq = mid*mid;
        if(sq == x){
            ans = mid;
            break;
        }else if(sq> x){
            e = mid -1;
        }else if(sq < x){
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    }
double MorePrecision(int n, long long int tempSol, int No_Of_pre){
    double factor =1;
    double ans2 = 0;
    for (int i = 0; i < No_Of_pre; i++)
    {
        factor = factor/10;
        ans2 = tempSol;
        for(double j = ans2 ; j*j <n ; j = j +factor){
            ans2  = j;
        }
    }
    return ans2;
    
}
int main(){
    int num = 78;
    long long int tempSol = mySqrt(num);
    cout<<tempSol<<endl;
    double ans = MorePrecision(num,tempSol,5);
    cout<<ans;
    
    return 0;
}