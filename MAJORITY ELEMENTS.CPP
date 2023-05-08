class Solution {
public:
int majorityElement(vector<int>& nums) {
   int majority =nums[0],v=1;
   for( int i=1;i<nums.size();i++){
       if(v==0){
           v++;
           majority=nums[i];
       }
       else if(majority==nums[i]){
            v++;
       }
       else 
           v--;
   } 
   return majority;
 }
};
