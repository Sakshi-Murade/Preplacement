#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        size_t index = haystack.find(needle);
        if (index == std::string::npos) {
            return -1;
        }
        return static_cast<int>(index);
    }
};

int main() {
    Solution solution;
    std::cout << solution.strStr("sadbutsad", "sad") << std::endl;  // Output: 0
    std::cout << solution.strStr("leetcode", "leeto") << std::endl; // Output: -1
    return 0;
}
