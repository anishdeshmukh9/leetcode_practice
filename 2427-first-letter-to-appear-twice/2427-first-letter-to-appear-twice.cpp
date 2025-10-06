class Solution {
public:
    char repeatedCharacter(string s) {

        unordered_map<char , int > map; 

        for(auto a  : s){
            map[a]++;

            if(map[a] == 2){
                return a;
            }
        }

        return '0';
        
    }
};