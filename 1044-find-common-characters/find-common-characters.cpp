class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        //to store the count of common element
        vector<int>common(26,INT_MAX);
        //to stroe the result
        vector<string>res;
        for(auto s :words){
            //to store the count of each element
            vector<int>count(26,0);
            //to count the frequency
            for(auto c:s) count[c-'a']++;
            // to store the min count of elements 
          

            for(int i=0;i<26;++i){
                common[i]=min(common[i],count[i]);
            
            }
        }
        //store the ouput in result
        for(int i=0;i<26;++i){
        //if common[i] is not 0 we have store it common[i] times as it includes duplicates    
            if(common[i]>0){
                while(common[i]--)res.push_back(string(1,i+'a'));//it means we are storing string size 1
            }
        }
return res;
    }
};