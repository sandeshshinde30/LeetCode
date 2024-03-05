class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int currCount = 0;

        for(int i = s.size()-1;i>=0;i--)
        {
         if(s[i] != ' ') currCount++;
         else
         {
             if(currCount>0) break;
         } 
        }

    
    return currCount;
    }
};
