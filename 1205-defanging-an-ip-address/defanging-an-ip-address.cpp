class Solution {
public:
    string defangIPaddr(string address) {
        string a;
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                a=a+"[.]";
            }
            else{
                a=a+address[i];
            }
        }
        return a;
    }
};