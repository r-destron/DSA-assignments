class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Rohit Pokhriyal
        int n=nums.size();
        int expectedSum=0,actualSum=0;
        for(int i=0;i<n;i++){
            expectedSum+=i+1;
            actualSum+=nums[i];
        }
        return expectedSum-actualSum;
    }
};
