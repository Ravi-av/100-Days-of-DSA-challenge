class Solution {
public:
    bool wordPattern(string pa, string s) {
         
        int n = pa.size(), i = 0;
     
        unordered_map<char,string> m;
        stringstream sse(s);
        string word;
        int count = 0;
        
         while(sse >> word) {
            count++;
        }

        if(count != n) return false;

        stringstream ss(s);
        while(i<n && ss >> word) {
            if(m.find(pa[i]) != m.end()) {
                if(word != m[pa[i]]) return false;
            }


            else{
                for(auto &i : m) {
                    if(i.second == word) return false;
                }
                m[pa[i]] = word;
            }
            i++;
        }

        return true;
    
    }
};