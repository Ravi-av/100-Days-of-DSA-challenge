class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit = 0;
        int sum =0;
        int product = 1;
    
         while(n>0){

             digit = n%10;
             sum =sum+digit;
             product =product*digit;
            n = n/10;
         }
         int result = product-sum;
         return result; 

        
    }
};