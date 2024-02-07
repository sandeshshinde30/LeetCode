class Solution {
public:
    string frequencySort(string s) {
      string res = "";
      unordered_map<char,int> map;
      priority_queue<pair<int,char>> pq;

      for(char c : s)
      {
          map[c]++;
      } 

      for(auto a : map)
      {
          pq.push(make_pair(a.second,a.first));
      } 

    while(!pq.empty())
    {
        int count;
        char c;

        count = pq.top().first;
        c = pq.top().second;
        pq.pop();

        while(count)
        {
            res += c;
            count--;
        }
    }

    return res;
    }
};