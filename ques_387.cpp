class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char,int> map;
        int c = 0;
        
        for(char c : s) map[c]++;
        
        for(int i=0;i<s.length();i++)
        {
            if(map[s[i]] == 1)
            {
                return i;
            }
        }
        
//         for(auto i=map.begin();i!=map.end();i++)
//         {
//             if(i->second == 1) 
//             {
//                 return c;
//             }
            
//             c++;
//         }
        
        return -1;
    }
};