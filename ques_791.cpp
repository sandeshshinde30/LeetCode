class Solution {
public:

    bool charFind(char c , string s)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c) return true;        
        }
        return false;
    }       

    string customSortString(string order, string s) {
        map<char,int> umap;
        string ans = "";

        for(char c : s)
        {
            umap[c]++;        
        }

        for(char a : order)
        {
            if(charFind(a,s))
            {
                ans += string(umap[a],a);
                umap.erase(a);
            }
        } 

        for(auto a : umap)
        {
            ans += string(a.second,a.first);
        }

        // reverse(ans.begin(),ans.end());
        return ans;
    }
};
