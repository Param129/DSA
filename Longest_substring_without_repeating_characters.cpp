class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int i = -1;
        int j = -1;
        unordered_map<char, int> mp;

        while(i<((int)s.length()-1)){
        
            while (i < ((int)s.length() - 1)) {
                
                i++;
                
                char ch = s[i];
                mp[ch]++;
                if (mp[ch] == 2) break;
                else {
                    ans = max(ans, i - j);
                }
            }

            while (j < i) {
               
                j++;
               
                char ch = s[j];
                mp[ch] -= 1;
                if (mp[ch] == 1) break;
            }
        }
        return ans;
    }
};
