class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q; 
        long long gift = 0; 

        for(auto  a : gifts){
           q.push(a); 
        }

        while(k  != 0){
            int pile  = q.top();

            pile = abs(sqrt(pile)); 

            q.pop(); 

            q.push(pile);

            k--;

        }
        while(!q.empty()){

            gift  += q.top();
            q.pop(); 
        }
        

        return gift;
    }
};