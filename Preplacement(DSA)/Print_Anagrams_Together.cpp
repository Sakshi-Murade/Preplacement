#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string, vector<string>> mp;
        for (string s : string_list) {
            string t = s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> result;
        for (auto p : mp) {
            result.push_back(p.second);
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<string> string_list = {"act", "god", "cat", "dog", "tac"};
    vector<vector<string>> result = solution.Anagrams(string_list);
    
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
