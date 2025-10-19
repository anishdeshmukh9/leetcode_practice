class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        vector<int> index_c;

        int n =  s.size(); 
         vector<int> ans(n,0); 


        for(int  i =0;  i<n; i++){
            if(s[i] == c){
                index_c.push_back(i);
            }
        }

        int m;
        for(int i=0; i<n; i++){

            m = INT_MAX;

            if(s[i] == c){
                ans[i] = 0;
            }
            else{

                for(auto a  : index_c){
                    m = min(abs(i-a) , m);
                }

                ans[i] = m;
            
            }





        }


        return ans;





           }
};