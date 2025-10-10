class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<char , string> mp; 
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        vector<string> ans = {""};  

        for (char d : digits) {
            vector<string> temp;
            for (string s : ans) {
                for (char c : mp[d]) {
                    temp.push_back(s + c);
                }
            }
            ans = temp; // update with new combinations
        }

        return ans;
    }
};
