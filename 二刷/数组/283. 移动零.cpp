/*
 * @Author: Ang  www.blogca.cn
 * @Date: 2022-08-22 12:47:25
 * @LastEditors: Ang  www.blogca.cn
 * @LastEditTime: 2022-08-22 13:28:53
 * @FilePath: \leetcode-vscode-bobo\二刷\数组\283. 移动零.cpp
 * @Description: https://leetcode.cn/problems/move-zeroes/
 *
 * Copyright (c) 2022 by blogca.cn/Ang, All Rights Reserved.
 */

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;  // j指向零部分的开头

        while (i < nums.size()) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                ++j;
            }
            ++i;
        }
        return;
    }
};

int main() { return 0; }