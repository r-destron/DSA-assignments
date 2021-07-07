class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(m*n!=r*c) return mat;
        
        vector<vector<int>> v(r,vector<int>(c));
        
        int p=0,q=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(q==m){p++;q=0;}
                v[i][j]=mat[p][q++];
            }
        }
        return v;
    }
};