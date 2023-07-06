class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[0]<arr[i])
            {
                if(arr[i]>arr[s])
                {
                    s=i;
                }
            }
        }
        return s;
    }
};
