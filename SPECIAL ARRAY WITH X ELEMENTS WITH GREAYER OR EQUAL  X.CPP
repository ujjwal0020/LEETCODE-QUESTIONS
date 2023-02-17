class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        for(int i=0;i<1000;i++)
        {
            int c=0;
            for(int num:nums)
            {
                if(num>=i)
                c++;
            }
            if(i==c)
            return i;
        }
        return -1;
    }
};
