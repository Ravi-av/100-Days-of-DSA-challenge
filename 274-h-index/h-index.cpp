class Solution {
public:
    int hIndex(vector<int>& citations) {
    sort(citations.rbegin(),citations.rend());

    int hindex =0;
    int n = citations.size();
      while(hindex <n &&citations[hindex]>hindex){
          hindex++;
      }
      return hindex++;
    }
};