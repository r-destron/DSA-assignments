class NumArray {
private:
    vector<int> data;
public:
    NumArray(vector<int> &nums) {
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        data.push_back(sum);
    }
}

int sumRange(int i, int j) {
    if(i==0)
        return data[j];
    else
        return data[j]-data[i-1];
}
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */