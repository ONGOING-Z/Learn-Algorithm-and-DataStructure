#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <set>
#include <stack>
#include <cmath>
using namespace std;

/* Leetcode */
/* Type: hash table */
/* 题目信息 */
/*
 *451. Sort Characters By Frequency
Given a string, sort it in decreasing order based on the frequency of characters.

Example 1:

Input:
"tree"

Output:
"eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input:
"cccaaa"

Output:
"cccaaa"

Explanation:
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input:
"Aabb"

Output:
"bbAa"

Explanation:
"bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
 */

/* my solution */
// solution-x, ms, defeat %
class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        vector<pair<char, int>> vec;
        for (auto e : mp) {
            vec.push_back({e.first, e.second});
        }
        sort(vec.begin(), vec.end(), cmp);
        
        string res = "";
        for (int i = 0; i < vec.size(); i++) {
            for (int j = 0; j < vec[i].second; j++) {
                res += vec[i].first;
            }
        }
        return res;
    }
private:
    static bool cmp(pair<char, int> p1, pair<char, int> p2) {
        return p1.second > p2.second;
    }
};

/* better solution */
// solution-x, ms, defeat %


/* 一些总结 */
// 1. 题意: 多值排序问题
//
// 需要注意的点: 
// 1. 
// 2. 
// 3. 

/*
 * main test
 */

int main(void)
{
    Solution solution;

    return 0;
}

