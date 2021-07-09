class Solution {
public:
    
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        int c = 0;
        string ans = "";
        
        while(i>=0 || j>=0 || c == 1) {
            if(i>=0) c += a[i--] == '1';
            if(j>=0) c += b[j--] == '1';
            
            ans = ((c%2) ? "1" : "0" ) + ans;
            c/=2;
        }
       
        return ans;
    }
};