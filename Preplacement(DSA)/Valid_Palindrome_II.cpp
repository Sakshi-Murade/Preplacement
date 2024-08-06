#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }

private:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    cout << solution.validPalindrome("abca") << endl; 
    cout << solution.validPalindrome("racecar") << endl;  
    cout << solution.validPalindrome("deeee") << endl;  
    cout << solution.validPalindrome("abcdef") << endl;  
    return 0;
}

