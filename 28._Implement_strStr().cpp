class Solution {
public:
    int strStr(string haystack, string needle) {
        std::size_t found;
        found=haystack.find(needle);
        return found;
    }
};