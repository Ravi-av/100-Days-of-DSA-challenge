class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int count=0,k=0;
        vector<int>arr(123,0);

        for(int i = 0; i < n; i++){
            arr[s[i]]++;
        }

        for(int i=0;i<123;i++){
            if(arr[i]!=0){
                count=count+(2*(arr[i]/2));
            }
            if(arr[i]%2!=0) k++;
            
        }
        if(k++==0) return count;
        return count+1;
        

    }
};