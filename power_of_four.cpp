class Solution {
public:
    bool isPowerOfFour(int n) {
        //Rohit Pokhriyal
        if(n==1) return true;
        if(n<1)return false;
        
        int   y = log(n)/log(4);
        float x = log(n)/log(4);
        
        if((float)y==x)return true;
        return false;
        
    }
};