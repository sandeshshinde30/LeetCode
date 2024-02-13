class Solution {
public:
    
    bool checkPalindrome(string word)
    {
        int left = 0;
        int right = word.length()-1;
        
        while(left<right)
        {
            if(word[left]!=word[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        for(string s : words)
        {
            if(checkPalindrome(s))
            {
                return s;
            }
        }
        return "";
    }
};