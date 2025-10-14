class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int  , int>map;
        unordered_map<int , int> ans;


        for(auto  i : arr){
            map[i]++;
        }

        for(auto [key , val] : map){
           ans[val]++;

           if(ans[val]  >= 2) return false;
            
        }

        return true; 
        
    }
};