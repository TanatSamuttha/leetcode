#include <iostream>
#include <vector>
#include <map>

class Solution {
private:

    static const int N = 2e4;
    std::map<int, int> dp;

public:
    int subarraySum(std::vector<int>& nums, int k) {
        using namespace std;
        dp[0] = 1;
        int sum = 0;
        int res = 0;
        for(int num : nums){
            sum += num;
            res += dp[sum - k];
            dp[sum]++;
        }
        return res;
    }
};

int main(){
    std::vector<int> nums = {1,2,3};
    int k = 3;

    Solution solution;
    std::cout << solution.subarraySum(nums, k);

    return 0;
}

