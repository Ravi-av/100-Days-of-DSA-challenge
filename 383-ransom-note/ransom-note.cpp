class Solution {
public:
    bool canConstruct(string t, string s) {
        unordered_map<char,int>m;
        for(int i =0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i = 0;i<t.size();i++){
            if(m[t[i]]>0){
                m[t[i]]--;
            } else
                return false;
            
        }
        return true;
        
    }
};