class Solution {
  int countsubset(vector < int > & nums, int sum) {
    int n = nums.size();
    vector < vector < int >> t(n + 1, vector < int > (sum + 1, 0));

    t[0][0] = 1;
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= sum; j++) {

        if (nums[i - 1] <= j)
          t[i][j] = t[i - 1][j] + t[i - 1][j - nums[i - 1]];

        else
          t[i][j] = t[i - 1][j];
      }
    }
    return t[n][sum];
  }
  public:

    int findTargetSumWays(vector < int > & nums, int target) {
      int n = nums.size();

      int sum = 0;
      for (auto x: nums) sum += x;
      if (sum < target || (sum - target) % 2 != 0) return 0;

      int sm2 = (sum - target) / 2;

      return countsubset(nums, sm2);

    }
};