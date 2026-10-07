#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> so;
        unordered_map<char, int> to;

        for (char c : s) {
            so[c]++;
        }
        for (char c : t) {
            to[c]++;
        }
        if (so == to) return true;
        
        return false;

    }
};
