class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> s;
        for(string word:words){
            string temp="";
            for(char ch:word){
                temp+=morse_code[ch-'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};