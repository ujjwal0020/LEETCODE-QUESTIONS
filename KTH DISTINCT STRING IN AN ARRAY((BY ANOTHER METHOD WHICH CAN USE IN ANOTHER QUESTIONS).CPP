class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>umap;
        int i,count=0;
        for( i=0;i<arr.size();i++)
        {
            umap[arr[i]]++;
        }
        for( i=0;i<arr.size();i++)
        {
            string key=arr[i];
            auto temp=umap.find(key);
            int val=temp->second;
            if(val==1)
            {
                count++;
                if(count==k)
                return arr[i];
            }
        }
       return ""; 
    }
};
