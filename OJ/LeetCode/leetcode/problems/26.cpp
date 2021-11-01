#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

/* Leetcode */
/* Type: array */
/* 题目信息 */
/*
 *26. Remove Duplicates from Sorted Array
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Clarification:

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.

Internally you can think of this:

// nums is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2]
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.
 

Constraints:

0 <= nums.length <= 3 * 104
-104 <= nums[i] <= 104
nums is sorted in ascending order.
 */

/* my solution */
// solution-x, ms, defeat %


/* better solution */
// solution-1, 68ms, defeat 19.75%
// 使用另一个数组保存结果，最后再赋值到原数组。
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (temp.empty())
            {
                temp.push_back(nums[i]);
                continue;
            }
            
            if (temp.back() == nums[i])
            {
                continue;
            }
            else
            {
                temp.push_back(nums[i]);
                cout << nums[i] << endl;
            }
        }
        nums.erase(nums.begin(), nums.end());
        for (int i = 0; i < temp.size(); i++)
            nums.push_back(temp[i]);
        return nums.size();
    }
};

/* 一些总结 */
// 1. 题意: 去除数组中的重复元素，保持元素的唯一。
//
// 需要注意的点: 
// 1. 
// 2. 
// 3. 

