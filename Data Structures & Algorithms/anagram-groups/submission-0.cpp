class Solution {
public:
// key:value
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> da;
        int size_strs = strs.size();
        string temp;
        for(int i=0; i<size_strs; i++){
            temp=strs[i];
            sort(temp.begin(), temp.end());
            da[temp].push_back(strs[i]);
        }
        vector <vector<string>> op;
        for (auto &x:da){
            op.push_back(x.second);
        }
        return op;
    }
};
