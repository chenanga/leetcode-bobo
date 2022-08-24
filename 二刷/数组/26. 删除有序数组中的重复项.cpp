#include <bits/stdc++.h>

using namespace std;

// //解法1
// class Solution {
// public:
// 	int removeDuplicates(vector<int>& nums) {
// 		if (nums.size() <= 1) return nums.size();

// 		int k = 0; // 代表[0,k）中没重复元素
// 		int i = 0;
// 		for (; i < nums.size() - 1; i++) {
// 			while (i < nums.size() - 1 && nums[i] == nums[i + 1])
// 				i++;

// 			swap(nums[k++], nums[i]);

// 		}
// 		if (i == nums.size() - 1 && k - 1 != i)
// 			swap(nums[k++], nums[i]);

// 		return k;
// 	}
// };

// //解法2
// class Solution {
// public:
// 	int removeDuplicates(vector<int>& nums) {
// 		int len = nums.size();
//         if (len <= 1) return len;

// 		int k = 1; // 代表[0,k）中没重复元素
//         int i = 1;

// 		while (i < len ) {
//             if(nums[i] != nums[i - 1])
// 				nums[k++] = nums[i];

//             i++;
// 		}

// 		return k;
// 	}
// };

// //2022-05-10
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.size() == 0) return 0;
//         //nums[0,right]
//         int right = -1;
//         int numStart = -10001;
//         for (int i = 0; i < nums.size(); ++ i) {

//             if (nums[i] != numStart) {
//                 ++ right;
//                 numStart = nums[i];
//                 swap(nums[i], nums[right]);
//             }
//         }
//         return right + 1;
//     }
// };

// 2022-08-24
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for (int i = 0; i < nums.size(); ++i) {
            while (i > 0 && i < nums.size() && nums[i] == nums[i - 1]) ++i;
            if (i < nums.size()) nums[index++] = nums[i];
        }
        return index;
    }
};

int main() { return 0; }