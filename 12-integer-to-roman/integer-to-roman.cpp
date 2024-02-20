class Solution {
public:
    string intToRoman(int num) {
         string result = "";
        vector<int>check = {1000,500,100,50,10,5,1};
        vector<char>str = {'M','D','C','L','X','V','I'};
        int val;
        val = num/1000;
        for(int j = 0;j < val;j++){result += 'M';}
        num = num%(1000);

        val = num/100;
        if(val == 9){
            result += "CM";
        }
        else if(val > 4){
            result += "D";
            for(int j = 0;j < val-5;j++){
                result += "C";
            }
        }
        else if(val == 4){
            result += "CD";
        }
        else{
            for(int j = 0;j < val;j++){
                result += "C";
            }
        }
        num = num%(100);

        val = num/10;
        if(val == 9){
            result += "XC";
        }
        else if(val > 4){
            result += "L";
            for(int j = 0;j < val-5;j++){
                result += "X";
            }
        }
        else if(val == 4){
            result += "XL";
        }
        else{
            for(int j = 0;j < val;j++){
                result += "X";
            }
        }
        num = num%(10);

        val= num/1;
        if(val == 9){
            result += "IX";
        }
        else if(val > 4){
            result += "V";
            for(int j = 0;j < val-5;j++){
                result += "I";
            }
        }
        else if(val == 4){
            result += "IV";
        }
        else{
            for(int j = 0;j < val;j++){
                result += "I";
            }
        }
        return result;
    }
};