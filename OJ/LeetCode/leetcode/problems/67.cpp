#//include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

/* Leetcode */
/* Type: Math */
/* 题目信息 */
/*
 *67. Add Binary
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

Each string consists only of '0' or '1' characters.
1 <= a.length, b.length <= 10^4
Each string is either "0" or doesn't contain any leading zero.
 */

/* my solution */


/* better solution */
class Solution {
public:
    string addBinary(string a, string b) {
        int lenA = a.size() - 1; 
        int lenB = b.size() - 1;
        int carry = 0;
        string res = "";
        while (lenA >= 0 || lenB >= 0 || carry)
        {
            if (lenA >= 0)
            {
                carry += a[lenA] == '0' ? 0 : 1;
                lenA--;
            }
            if (lenB >= 0)
            {
                carry += b[lenB] == '0' ? 0 : 1;
                lenB--;
            }
            
            res = ((carry % 2) == 0 ? "0" : "1") + res;
            carry /= 2;
        }
        
        return res;
    }
};

/* 一些总结 */
// 1. 题意: 
//
// 需要注意的点: 
// 1. 从后往前开始
// 2. carry % 2与 carry / 2容易混
// 3. 

