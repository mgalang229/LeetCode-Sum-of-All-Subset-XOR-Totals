class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> vec;
        for (int bit = 0; bit < (1 << n); bit++) {
            vec.clear();
            for (int i = 0; i < n; i++)
                if (bit & (1 << i))
                    vec.push_back(nums[i]);
            if ((int) vec.size() == 0)
                continue;
            int x = vec[0];
            for (int i = 1; i < (int) vec.size(); i++)
                x ^= vec[i];
            sum += x;
        }
        return sum;
    }
};
