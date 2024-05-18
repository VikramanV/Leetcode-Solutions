class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<t.size();j++){
                if(s[i]==t[j]){
                    a=i-j;
                    if(a<0){
                        a=a*(-1);
                    }
                    b=b+a;
                    a=0;
                }
            }
        }
        return b;
    }
};