class Solution {
public:
    string defangIPaddr(string address) {
        string newaddr;
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
            newaddr=newaddr+"[.]";
            else
            newaddr=newaddr+address[i];
        }
        return newaddr;
    }
};
