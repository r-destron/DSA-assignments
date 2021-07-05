class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int n=nums.size();
        if(n==0){nums.push_back(0);return n;}
        int i=0,j=0,k=1;
        while(1){
            if(j>=n-1)break;
            if(nums[i]==nums[j+1])  j++;
            else{
                swap(nums[i+1],nums[j+1]);
                i++;k++;j++;
            }
            
        }
        return k; 
    }
};