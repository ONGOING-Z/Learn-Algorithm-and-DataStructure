#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
//#include <dbg.h>
using namespace std;

/* pat b */
/* Type:  */
/* 题目信息 */
/*
 *
 */

/* my solution */
int main(int argc, char *argv[])
{
    // input
    int n, num, A1 = 0, A2 = 0, A5 = 0;
    double A4 = 0.0;
    cin >> n;
    vector<int> v[5];
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v[num % 5].push_back(num);
    }
    // compute
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (i == 0 && v[i][j] % 2 ==0) A1 += v[i][j];
            if (i == 1 && j % 2 == 0) A2 += v[i][j];
            if (i == 1 && j % 2 == 1) A2 -= v[i][j];
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    // output
    for (int i = 0; i < 5; i++)
    {
        if (i != 0) printf(" ");
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0)
        {
            printf("N");
            continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", v[2].size());
        if (i == 3) printf("%.1f", A4 / v[3].size());
        if (i == 4) printf("%d", A5);
    }
    return 0;
}
/* better solution */


/* 一些总结 */
// 1. 题意: 
//
// 需要注意的点: 
// 1. 
// 2. 
// 3. 

