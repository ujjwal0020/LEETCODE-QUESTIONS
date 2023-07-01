class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
    int s=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<arr.size();j++)
        {
            for(int k=i;k<=j;k++)
            {
                if((i+j)%2==0)
                {
                    s=s+arr[k];
                }
            }
        }
    }
    return s;
    }
};
