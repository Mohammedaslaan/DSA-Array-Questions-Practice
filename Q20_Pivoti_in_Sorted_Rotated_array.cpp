#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,11,12,4,6,7,8,9};
    int checkStart = arr[0];
    int len = 8;
    int s = 0;
    int e = len-1;
    int mid = s + (e-s)/2 ;
    while (s<=e){
        if(arr[mid+1] >arr[mid] && arr[mid-1] > arr[mid]){
            //this is lower pivot
            // return arr[mid];
            cout<<arr[mid];
            break;
        }else if(arr[mid+1]<arr[mid] && arr[mid-1] <arr[mid]){
            //this is upper pivot
            // return arr[mid+1];
            cout<<arr[mid+1];
            break;
        }else if(arr[mid+1]>arr[mid] && arr[mid-1] <arr[mid]){
            // you have to check in which part you are right now.
            if(arr[checkStart] >arr[mid]){
                // you are in left part
                e = mid;
            }else{
                // you are in right part
                s = mid;
            }
        }
        mid = s + (e-s)/2 ;
    }
     
return 0;
}