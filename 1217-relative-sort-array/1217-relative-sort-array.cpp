class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int , int> map; 
        vector<int> ans;
        vector<int> remain; 

        for(auto a  : arr2){
            map[a] =0;
        }

        for(auto a : arr1){

        if(map.find(a) == map.end()){
                remain.push_back(a);
                continue;
            }

            map[a]++;
        }
        int frq = 0; 

        for(auto b : arr2){
            frq = map[b];

            for(int i =0; i<frq; i++){
                ans.push_back(b);
            }
        }


    sort(remain.begin() , remain.end());


        for(auto a  : remain){
            ans.push_back(a);
        }



        return ans;
        
    }
};