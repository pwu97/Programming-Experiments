// Link: https://leetcode.com/discuss/interview-question/553399/
// Link: https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/discuss/?currentPage=1&orderBy=hot&query=

// You are given an integer array nums. In one move, you can choose one element of nums and change it by any value.
// Return the minimum difference between the largest and smallest value of nums after performing at most three moves.

// Example 1:
// Input: nums = [5,3,2,4]
// Output: 0
// Explanation: Change the array [5,3,2,4] to [2,2,2,2].
// The difference between the maximum and minimum is 2-2 = 0.

// Example 2:
// Input: nums = [1,5,0,10,14]
// Output: 1
// Explanation: Change the array [1,5,0,10,14] to [1,1,0,1,1]. 
// The difference between the maximum and minimum is 1-0 = 1.

#include <bits/stdc++.h>
using namespace std;

int minDifference(vector<int>& nums) {
    int n = nums.size();
    if (nums.size() <= 4) return 0;
    sort(nums.begin(), nums.end());
    return min({nums[n-4]-nums[0], nums[n-1]-nums[3], nums[n-2]-nums[2], nums[n-3]-nums[1]});
}

int main() {
    vector<int> v1 = {-1, 3, -1, 8, 5, 4};
    vector<int> v2 = {10, 10, 3, 4, 10};
    cout << minDifference(v1) << endl;
    cout << minDifference(v2) << endl;
    
    return 0;
}

// 2
// 0
// ./a.out  0.00s user 0.00s system 1% cpu 0.271 total