class Solution {
public:
    int countBits(int n){
        int c=0;
        while(n){
            n=n&(n-1);
            c++;
        }
        return c;
    }
    vector<string> readBinaryWatch(int n) {
        //Rohit Pokhriyal
        vector<string> ans;
        for(int hour=0;hour<12;hour++){
            for(int min=0;min<60;min++){
                int temp=countBits(hour)+countBits(min);
                if(temp==n){
                    ans.push_back(to_string(hour) + ":" + (min < 10 ? "0" : "") + to_string(min));
                } 
            }
        }
        return ans;
    }
};