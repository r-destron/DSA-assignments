class Solution {
public:
    bool pair(char a,char b){
        if(a=='(' && b==')')return true;
        else if(a=='[' && b==']')return true;
        else if(a=='{' && b=='}')return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if( !st.empty() && ( pair(st.top(),s[i]) ) ) st.pop();
            else st.push(s[i]);
        }
        if(st.empty()) return true;
        return false;
    }
};