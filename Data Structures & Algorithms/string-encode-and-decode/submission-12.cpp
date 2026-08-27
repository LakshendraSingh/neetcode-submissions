class Solution {
private:
    vector <int> v;

public:

    void push_to_v(int x){
        v.push_back({x});
    }

    string encode(vector<string>& strs) {
        int strs_size=strs.size();
        string s;
        for(auto i=0;i<strs_size;i++){
            int char_count = 0;
            for(auto j=0;j<strs[i].size();j++){
                char_count++;
                strs[i][j]=(strs[i][j])+1;
                s+=strs[i][j];
            }
            push_to_v(char_count);
        }
        cout<<s<<endl;
        for(auto i:v) cout<<i<<endl;
        return s;
    }

    vector<string> decode(string s) {
        vector <string> sv;
        int s_len=s.length();
        for(auto i=0;i<s_len;i++)
            s[i]=s[i]-1;
        for(auto i=0, j = 0;i<v.size();i++){
            sv.push_back({s.substr(j,v[i])});
            j+=v[i];
        }  
        return sv;
        
    }
};
