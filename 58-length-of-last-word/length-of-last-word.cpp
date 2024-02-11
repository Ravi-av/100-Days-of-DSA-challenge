class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int count = 0;
        int i = size - 1;
    
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
    
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        
        return count;
    }
};