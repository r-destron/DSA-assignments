class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[j]<nums[i])
                    count++;
            }
            v[i]=count;
        }
        return v;
    }
};