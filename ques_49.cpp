class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
        int n = strs.size();  
        vector<string> str(strs);      
        unordered_map<string,vector<int>> umap;
        int j = 0;

        for(int i = 0;i<n;i++)
        {
            sort(strs[i].begin(),strs[i].end());
            umap[strs[i]].push_back(i);
        }
        vector<vector<string>> vec(umap.size());

        for(auto i : umap)
        {
           for(int k=0;k<(i.second.size());k++)
            {
                string temp = str[i.second[k]];
                vec[j].push_back(temp);
            } 
            j++;       
        }

        return vec; 
    }
};
