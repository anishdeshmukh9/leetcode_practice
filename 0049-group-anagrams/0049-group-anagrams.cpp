class Solution {
public:
    string signature(string s) {
        sort(s.begin(), s.end());
        return s;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string sig = signature(s);
            mp[sig].push_back(s);
        }

        vector<vector<string>> result;
        for (auto [key , value] : mp) {
            result.push_back(value);
        }

        return result;
    }
};
