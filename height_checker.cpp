class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        int n=heights.size();
        vector<int> map(101,0);
        for(int i=0;i<n;i++){
            map[heights[i]]++;
        }
        int cur=1;
        for(int h:heights){
            while(map[cur]==0)
                cur++;
            if(cur!=h) ans++;
            map[cur]--;
        }
        return ans;
    }
};