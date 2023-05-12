class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>res;
        for(auto i:strs) {
            int count[26];
            for(int j=0;j<26;j++)count[j]=0;
            for(int j=0;j<i.length();j++) {
                count[i[j]-'a']++;
            }
            string s ="";
            for(int j=0;j<26;j++) {
                s+=(j+'a')+(count[j]);
            }
            // Resultant string will be a5b6c4d0e0....
            // We can then grp the strings according to this string rep of their letters
            m[s].push_back(i);
        }
        for(auto i:m) {
            res.push_back(i.second);
        }
        return res;
        
    }
};