#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

/* Offer */
/* Type: queue */
/* 题目信息 */
/*
 *剑指 Offer 59 - II. 队列的最大值
请定义一个队列并实现函数 max_value 得到队列里的最大值，要求函数max_value、push_back 和 pop_front 的均摊时间复杂度都是O(1)。

若队列为空，pop_front 和 max_value 需要返回 -1

示例 1：

输入: 
["MaxQueue","push_back","push_back","max_value","pop_front","max_value"]
[[],[1],[2],[],[],[]]
输出: [null,null,null,2,1,2]
示例 2：

输入: 
["MaxQueue","pop_front","max_value"]
[[],[],[]]
输出: [null,-1,-1]
 

限制：

1 <= push_back,pop_front,max_value的总操作数 <= 10000
1 <= value <= 10^5
 */

/* my solution */
// solution-x, ms, defeat %


/* better solution */
// solution-1, 256ms, defeat 95.75%
// brute force
// 使用一个数组，感觉类似双端队列
class MaxQueue {
    int q[20000];
    int begin = 0, end = 0;
public:
    MaxQueue() {

    }
    
    int max_value() {
        int res = -1;
        for (int i = begin; i != end; i++)
        {
            res = max(res, q[i]);
        }
        return res;
    }
    
    void push_back(int value) {
        q[end++] = value;
    }
    
    int pop_front() {
        if (begin == end)
            return -1;
        return q[begin++];
    }
};
// solution-2
// deque
class MaxQueue {
    queue<int> q;
    deque<int> d;
public:
    MaxQueue() {

    }
    
    int max_value() {
        if (d.empty())
            return -1;
        return d.front();

    }
    
    void push_back(int value) {
        while (!d.empty() && value > d.back())
            d.pop_back();
        d.push_back(value);
        q.push(value);

    }
    
    int pop_front() {
        if (q.empty())
            return -1;
        int num = q.front();
        if (num == d.front())
            d.pop_front();
        q.pop();
        return num;
    }
};


/* 一些总结 */
// 1. 题意: 
//
// 需要注意的点: 
// 1. 
// 2. 
// 3. 

