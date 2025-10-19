class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {

        unordered_map<char , int> mp;

        for(int i=0; i<s.size(); i++){

            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = i;
            }
            else{
            mp[s[i]] = abs(i - mp[s[i]]);
            }
        }


        for(int i=0; i<s.size(); i++){

            int charindex  = int(s[i]) - 97;

            cout<<distance[charindex] <<" "<<mp[s[i]]<<",";


             if(distance[charindex] != mp[s[i]]-1){
                return false; 
             } 

        }



        return true;

    
        
    }
};