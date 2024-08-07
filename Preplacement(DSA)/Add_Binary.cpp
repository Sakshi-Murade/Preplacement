#include <string>
#include <algorithm>
#include <iostream>

class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        int aLen = a.size() - 1;
        int bLen = b.size() - 1;

        while (aLen >= 0 || bLen >= 0 || carry) {
            int sum = carry;
            
            if (aLen >= 0) {
                sum += a[aLen] - '0';
                aLen--;
            }
            
            if (bLen >= 0) {
                sum += b[bLen] - '0';
                bLen--;
            }

            carry = sum / 2;
            result.push_back((sum % 2) + '0');
        }

        
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution solution;
    string a = "11";
    string b = "1";
    string result = solution.addBinary(a, b);
    cout << "Result: " << result << endl;
    return 0;
}
