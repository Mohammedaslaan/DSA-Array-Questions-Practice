// // 33. Search in Rotated Sorted Array
// // Leetcode
// // https://leetcode.com/problems/search-in-rotated-sorted-array/description/

// class Solution {
// public:
//     int LowPivot(vector<int>& nums){
//         int s = 0;
//         int e = nums.size() -1;
//         int mid = s + (e-s) /2 ;

//         while(s<e){
//             if(nums[0] <= nums[mid]){
//                 s = mid+1;
//             }else{
//                 e = mid;
//             }
//             mid = s + (e-s) /2 ;
//         }
//     return s;
//     }
//     int BinarySearch(vector<int>& nums, int target,int s , int e){
//         int mid = s + (e-s) /2 ;
//         while(s<=e){
//             if(nums[mid] == target){
//                 return mid;
//             }else if(nums[mid] > target){
//                 e = mid - 1;

//             }else{
//                 s = mid + 1;
//             }
//             mid = s + (e-s) /2 ;
//         }
//         return -1;
//     }
//     int search(vector<int>& nums, int target) {
//         int size = nums.size();
//         if(size == 1){
//             if(nums[0] == target){
//                 return 0;
//             }else{
//                 return -1;
//             }
//         }
//         if(nums[0] <  nums[size-1]){
//             return BinarySearch(nums,target,0,size-1);
//         }
//         int lower_pivot = LowPivot(nums);
//         cout<<lower_pivot<<endl;
//         if(nums[0] > target){
//             // low pivot wali line me hai.
//             int s = lower_pivot;
//             int e = nums.size() - 1;
//             return BinarySearch(nums,target,s,e);

//         }else{
//             //high pivot wali line me hai.
//             int s = 0;
//             int e = lower_pivot - 1;
//             return BinarySearch(nums,target,s,e);
//         }
        
//     }
// };