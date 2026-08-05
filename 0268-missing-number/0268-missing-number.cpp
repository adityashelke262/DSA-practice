class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int expSum=(n*(n+1))/2;

        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int ans=expSum-sum;
        return ans;
    }
};