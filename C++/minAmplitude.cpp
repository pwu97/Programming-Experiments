// Link: https://leetcode.com/discuss/interview-question/553399/
// Link: https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/discuss/?currentPage=1&orderBy=hot&query=
// Given an Array A, find the minimum amplitude you can get after changing up to 3 elements. Amplitude is the range of the array (basically difference between largest and smallest element).

// Example 1:
// Input: [-1, 3, -1, 8, 5 4]
// Output: 2
// Explanation: we can change -1, -1, 8 to 3, 4 or 5

// Example 2:
// Input: [10, 10, 3, 4, 10]
// Output: 0
// Explanation: change 3 and 4 to 10

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
// ./a.out  0.00s user 0.00s system 42% cpu 0.009 total