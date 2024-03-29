class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        int c=0;
        unordered_map<char,int> m;
        char prev1='@',prev2='@';
        int t=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]) t++;
            if(s[i]!=goal[i] && ((goal[i]==prev1 && s[i]==prev2) || prev1=='@')){
                c++;
                prev1=s[i];
                prev2=goal[i];
            } 
            m[s[i]]++;
        }
        int flag=0;
        for(auto i:m){
            if(i.second>1) {flag=1;
            break;
        }
        }
        if((c==2 && t==2) || (t==0 && flag==1)) return 1;
        return 0;
    }
};