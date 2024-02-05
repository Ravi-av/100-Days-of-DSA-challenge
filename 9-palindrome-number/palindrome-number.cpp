class Solution {
public:
    bool isPalindrome(int x) {
       long long int r,sum =0,temp;
        temp = x;

        while(x>0){
            r = x%10;
            sum = (sum*10)+r;
            x = x/10;
        }
        if(temp == sum){
        return true;
        }
        
        return false;
        

    }
};