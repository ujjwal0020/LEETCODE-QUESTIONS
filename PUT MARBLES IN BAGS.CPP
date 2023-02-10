class Solution {
public:



long long putMarbles(vector<int>& v, int limit) {

          if(limit == 1 || limit == v.size()) return 0;


          long long int ans = 0;

         long long int ans1 = 0;
           limit--;

         vector<long long int>res1;

          for(long long int i = 0;i<v.size()-1;i++){res1.push_back(v[i]+v[i+1]);}


             vector<long long int>res;

          for(long long int i = 0;i<v.size()-1;i++){res.push_back(v[i]+v[i+1]);}

         sort(res1.begin() , res1.end() , greater<long long int>());
          sort(res.begin() , res.end());


            for(long long int i =0;i<limit;i++) ans1 += res1[i];
        for(long long int i =0;i<limit;i++) ans += res[i];


        return (ans1 - ans);



    }
    };
