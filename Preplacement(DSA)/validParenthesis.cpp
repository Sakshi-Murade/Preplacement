#include <stack>
#include <unordered_map>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> mappings = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        for (char& ch : s) {
            if (mappings.count(ch)) {
                char topElement = stack.empty() ? '#' : stack.top();
                stack.pop();
                if (topElement != mappings[ch]) {
                    return false;
                }
            } else {
                stack.push(ch);
            }
        }
        
        return stack.empty();
    }
};

