class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        unordered_map<int, int> map; 
        vector<int> ans; 

        for(auto  a : nums){
          map[a]++;
            if(map[a] > 1){
                ans.push_back(a);
            }
        }



        return ans;

    
        
    }
};