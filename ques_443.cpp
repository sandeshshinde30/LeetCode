class Solution {
public:
 int compress(vector<char>& chars) {

    int num = 1;
    int j = 0;

    for(int i = 1;i<=chars.size();i++)
    {
        if(i == chars.size() || chars[i-1] != chars[i])
        {
            chars[j++] = chars[i-1];
            if(num > 1)
            {
                string tmp = to_string(num);
                for(char c : tmp)
                {
                    chars[j++] = c;            
                }            
                num = 1;
            }              
        }    
        else
        {
            num++;         
        }
    }
    return j;
}   
};


// class Solution {
// public:
//     int reverseDigits(int num) 
//     { 
//         int rev_num = 0; 
//         while (num > 0) { 
//             rev_num = rev_num * 10 + num % 10; 
//             num = num / 10; 
//         } 
//         return rev_num; 
//     } 
//     int compress(vector<char>& chars) {
//         int j = 0;
//         int c = 1;
//         int rev = 0;
//         map<char,int> umap;

//         for(char c : chars)
//         {
//             umap[c]++;
//         }

//         chars.clear();

//         for(auto c : umap)
//         {
//             if(c.second>1)
//             {
//                 if(c.second>9)
//                 {
//                     chars.push_back(c.first);
//                     int a = c.second;
//                     a = reverseDigits(a);
//                     while(a)
//                     {
//                         int b = a%10;
//                         a /= 10;
//                         char ch = '0' + b;
//                         chars.push_back(ch);
//                     }
//                 }
//                 else
//                 {
//                     chars.push_back(c.first);
//                     char ch = '0' + c.second;
//                     chars.push_back(ch);
//                 }               
//             }
//             else
//             {
//                chars.push_back(c.first); 
//             }
//         }
//         // for(int i=1;i<chars.size();i++)
//         // {
//         //     if(chars[i]==chars[i-1])
//         //         c++;
//         //     else
//         //     {
//         //         if(c>1)
//         //         {
//         //             if(c>9)
//         //             {
//         //                 while(c)
//         //                 {
//         //                     int a = c%10;
//         //                     rev = rev*10+a;
//         //                     c = c/10;
//         //                 }
//         //                 while(rev)
//         //                 {
//         //                     int b = rev%10;
//         //                     rev /= 10;
//         //                     chars[j] = b;
//         //                     j++;
//         //                 }

//         //             }

//         //             chars[j] = chars[i-1];
//         //             j++;
//         //         }
//         //         else
//         //         {
//         //             chars[j] = chars[i-1];
//         //             j++;
//         //         }
//         //     }
//         // }
//         return chars.size();
//     }
// };


