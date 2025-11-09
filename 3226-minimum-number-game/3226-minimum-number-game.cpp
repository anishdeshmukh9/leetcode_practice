class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        priority_queue<int ,  vector<int> ,  greater<int>> q; 
        vector<int>  ans; 
        int n =  nums.size(); 

        for(auto a : nums){
            q.push(a); 
        }

        while(!q.empty()){
            int alice = q.top(); 
            q.pop(); 
            int bob = q.top(); 
            q.pop(); 

            ans.push_back(bob); 
            ans.push_back(alice);
        }



        return ans; 


        
    }
};