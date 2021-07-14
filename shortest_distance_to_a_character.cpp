class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        vector<int> v;
        string temp=s;
        while(s.find(c)!=string::npos) {
            int i=s.find(c);
            v.push_back(i);
            s[i]='-1';
        }
        int j=0;
        for(int i=0;i<s.size();i++) {
            if(i>v[j]) {
                if(j+1 < v.size() && abs(v[j]-i) > abs(v[j+1]-i)) {
                    j++;
                }
            }
            ans.push_back(abs(v[j]-i));
        }
        return ans;
    }
};