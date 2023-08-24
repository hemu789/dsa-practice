#include<iostream>
#include<algorithm>
using namespace std;

// case of vector Leetcode Q 34

// vector<int> searchRange(vector<int> &nums, int target)
// {
//     vector<int> ans;
//     int n = nums.size();
//     // ans.push_back(firstOcc(nums,target));
//     // ans.push_back(lastOcc(nums,target));

//     auto lb = lower_bound(nums.begin(), nums.end(), target);
//     auto ub = upper_bound(nums.begin(), nums.end(), target);

//     if (lb != nums.end() && *lb == target)
//     { // Check if target is found
//         int lb_i = lb - nums.begin();
//         int ub_i = ub - nums.begin() - 1; // Subtract 1 for upper bound

//         ans.push_back(lb_i);
//         ans.push_back(ub_i);
//     }
//     else
//     {
//         ans.push_back(-1); // Target not found
//         ans.push_back(-1);
//     }

//     return ans;
// }

int main(){

    int arr[] = {1,2,4,4,4,50,7};
    int n = 7;

    int key =4;

    auto lb = lower_bound(arr,arr+n,key);
    cout<<lb<<endl;// address
    cout<<(lb - arr)<<endl; // index

    auto ub = upper_bound(arr,arr+n,key);
    cout<<ub<<endl;
    cout<<(ub-arr) - 1<<endl;


    cout<<"For occurence "<<(ub-lb)<<endl;


    return 0;
}