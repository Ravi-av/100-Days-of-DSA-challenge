class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        char alphabets[26]={0};
        char ans;
        for(int i=0;i<t.length();i++)
            alphabets[t[i]-'a']++;
        for(int i=0;i<s.length();i++)
            alphabets[s[i]-'a']--;
        for(int i=0;i<26;i++)
        {
            if(alphabets[i]!=0)
            {
                ans=i+'a';
                break;
            }    
        }
        return ans;
    }
};