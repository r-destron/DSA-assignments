class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> m;
        string ans;
        string word="";
        for(int i=0;i<paragraph.length();i++){
            int flag=0;
            if(paragraph[i]!=' '&&paragraph[i]!='?'&&paragraph[i]!='!'&&paragraph[i]!='\''&&paragraph[i]!=';'&&paragraph[i]!='.'&&paragraph[i]!='\"'&&paragraph[i]!=',')
                word+=paragraph[i];
            else flag=1;
            if(flag==1 || (flag==0&&i==paragraph.length()-1)){
                cout<<word<<endl;
                transform(word.begin(), word.end(), word.begin(), ::tolower);
                m[word]++;
                word="";
            }
        }
        int max=INT_MIN;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>max){
                int flag=1;
                for(string s: banned){
                    transform(word.begin(), word.end(), word.begin(), ::tolower);
                    if(s==it->first){
                        flag=0; break;
                    }
                }
                if(flag==1) {max=it->second; ans=it->first;}
            }
        }
        return ans;
    }
};