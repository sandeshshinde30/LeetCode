class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        string numbers = "123456789";
        vector<int> vec;

        for(int i=0;i<numbers.length();i++)
        {
            for(int j=i+1;j<=numbers.length();j++)
            {
                string cur = numbers.substr(i,j-i);
                int c = stoi(cur);
                if(low <= c && c <= high) vec.push_back(c);
            }
        }

        sort(vec.begin(),vec.end());
        return vec;
    }
};