class Solution {
public:

    int minimumLength(string s) {
        
       int len = 0;
        int left = 0;
        int right = s.size()-1;
     while(left<right && s[left]==s[right])
    {
        char c = s[left];
        
        while(left<=right && s[left]==s[right]) left++;

        while(left<=right && c==s[right]) right--;
        
    }

    return right-left+1;

    }
};
