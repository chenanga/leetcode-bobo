#include <bits/stdc++.h>

using namespace std;

// 双指针, 没有改变元素的相对位置
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0, fast = 0;
        // 最终需要的区间是【0，slow)
        while (fast < nums.size()) {
            if (nums[fast] != val)
                swap(nums[fast++], nums[slow++]);  // 不需要交换，直接覆盖
            else
                ++fast;
        }
        return slow;
    }
};

int main() { return 0; }
