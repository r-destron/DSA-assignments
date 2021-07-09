class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size(),m=grid[0].size(),ans=m;
        for(int i=0;i<n;i++){
            if(grid[i][0]<0){ans=0;}
            else{
                int l=1,h=m-1,mid;
                while(l<=h){
                    mid=l+(h-l)/2;
                    if(grid[i][mid]<0 && grid[i][mid-1]>=0) {ans=mid;break;}
                    else if(grid[i][mid]>=0)l=mid+1;
                    else h=mid-1;
                }
            }
            count=count+(m-ans);
        }
        return count;
    }
};