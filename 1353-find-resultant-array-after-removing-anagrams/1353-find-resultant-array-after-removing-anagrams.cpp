class Solution {
public:

    
    vector<string> removeAnagrams(vector<string>& words) {

        vector<string> ans; 
        string prevS = "";


        for(auto b : words){
            string a = b; 
            sort(a.begin(), a.end());

            if(a != prevS){
                ans.push_back(b);
            }


            prevS = a; 

           


        }


        return ans;


        
    }
};