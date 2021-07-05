class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        if(n==0)return n;
        
        int i=0;int j=1;int flag=0;
        if(nums[0]==val){
            for(;j<n;j++){
                if(nums[j]!=val){
                    nums[0]=nums[j];
                    j++;flag=1;
                   break;
                }
            }
            if(flag==0)return 0;
        }
        
        for(;j<n;j++){
            if(nums[j]!=val){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};