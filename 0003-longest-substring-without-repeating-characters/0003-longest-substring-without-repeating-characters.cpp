class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =  s.size(); 
        if(n==1) return 1;

        int count =0; 

        for(int i=0; i<n; i++){

          int local_count = 0;   

          unordered_set<char> sub; 
          sub.insert(s[i]);
          int j = i+1;
          local_count ++;

    


            while(j<n){
                auto a = sub.find(s[j]);
                if(a == sub.end()){
                    local_count ++;
                    sub.insert(s[j]);
                    j++;
                    
                }
                else{
                  

                    break;
                }



            }
                            count = max(local_count , count);




        }
        return count;
    }
};