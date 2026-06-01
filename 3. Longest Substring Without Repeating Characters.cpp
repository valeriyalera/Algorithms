#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> charMap;
        int maxLength = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++) {
            if (charMap.find(s[right]) != charMap.end()) {
                left = std::max(left, charMap[s[right]] + 1);
            }
            
            charMap[s[right]] = right;
            maxLength = std::max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};
