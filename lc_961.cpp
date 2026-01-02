// You are given an integer array nums with the following properties:

// nums.length == 2 * n.
// nums contains n + 1 unique elements.
// Exactly one element of nums is repeated n times.
// Return the element that is repeated n times.
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int,int>freq ;
        for(int x : nums){
            freq[x]++;
            if(freq[x]==n){
                return x;
            }
        }
        return 0;
    }
};

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size();

        for (int i = 0; i < size - 2; i++) {
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2])
                return nums[i];
        }
        return nums[size - 1];
    }
};
