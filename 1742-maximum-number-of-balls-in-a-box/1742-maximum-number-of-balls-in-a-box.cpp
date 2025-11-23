class Solution {
public:

    int calculate(int n){
        int sum =0; 

        while(n>0){
            int res = n%10; 
             
            sum += res;
            n = n/10; 
        }

        return sum; 
    }
    int countBalls(int l, int h) {

      int n  = (h-l)+1;
      unordered_map<int , int> map; 

      int maxb = INT_MIN; 


      for(int i = l;  i<=h; i++){

        int sum = calculate(i); 

        map[sum]++; 

   
 
      }

    for(auto  [key , value] : map){
    maxb = max(value , maxb);

    }


      return  maxb; 
        
    }
};