class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& iv) {
        vector<vector<int>>result;
        sort(iv.begin(),iv.end());
        int i=0;
        while(i<iv.size()) {
            int start = iv[i][0];
            int end = iv[i][1];
            while(i<iv.size()-1 && end>=iv[i+1][0]){i++;end=max(iv[i][1],end);}
            result.push_back({start,end});
            i++;
        }
        return result;
    }
  
};