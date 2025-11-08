class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {


        int N  = tasks.size(); 
        unordered_map<char , int> map; 
        int mf = 0; 
        for(auto a : tasks){ 
             map[a]++; 

             mf = max(mf , map[a]); 


        }

        int totalsum = (mf-1) * (n+1); 

        for(auto  a : map){
             
             if(a.second == mf ) totalsum++; 

        }

        return max(totalsum , N); 
        
    }
};