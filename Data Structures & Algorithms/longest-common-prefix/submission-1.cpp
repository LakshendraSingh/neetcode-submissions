class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_len = strs[0].length();
        int strs_size= strs.size();
        for(int x = 0; x<strs_size;x++){
            if(strs[x].length()<min_len)
                min_len = strs[x].length();
        }
        sort(strs.begin(), strs.end());
        string front_el= strs.front();
        string back_el= strs.back();
        int idx = 0;
        for(int x=0; x<=min_len;x++){
            if (front_el[x]==back_el[x])
                idx+=1;
            else
                break;
            }
        if (idx>0)
            return strs[0].substr(0,idx);
        else
            return {};
    }
};