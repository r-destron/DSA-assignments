class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        unordered_map<char,int> m={ {'Q',1},{'W',1},{'E',1},{'R',1},{'T',1},{'Y',1},{'U',1},                                                                   {'I',1},{'O',1},{'P',1},{'A',2},{'S',2},{'D',2},{'F',2},                                                                   {'G',2},{'H',2},{'J',2},{'K',2},{'L',2},{'Z',3},{'X',3},                                                                   {'C',3},{'V',3},{'B',3},{'N',3},{'M',3}
                                  };
        vector<string> v;
        for(string s : words){
            int row = m[toupper(s[0])];int flag=1;
            for(int i=1;i<s.length();i++){
                if(m[toupper(s[i])]!=row)
                    {flag=0;break;}
            }
            if(flag==1) v.push_back(s);
        }
        return v;
    }
};