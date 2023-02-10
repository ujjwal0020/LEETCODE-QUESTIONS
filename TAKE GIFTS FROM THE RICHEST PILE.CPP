class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
       long long n= gifts.size();
        priority_queue<long long>x1;
        for(auto x: gifts)
        {
            x1.push(x);
            
        }
        long long ans =0;
        while(k--)
        {
            x1.push(sqrt(x1.top()));
            x1.pop();
            
        }
        
        while (!x1.empty())
        {
            ans+= x1.top();
            x1.pop();
        }
        return ans;
        
    }
};
