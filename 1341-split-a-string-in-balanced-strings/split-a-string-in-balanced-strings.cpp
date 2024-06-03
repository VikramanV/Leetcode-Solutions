class Solution {
public:
    int balancedStringSplit(string s) {
        int a=0;
        int b=0;
        int c=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                a++;
            }
            else if(s[i]=='L'){
                b++;
            }
            if(a==b){
                c++;
                a=0;
                b=0;
            }
        }
        return c;
    }
};