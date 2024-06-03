class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        int a=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            s1=s1+s[i];
            if(s[i]==' '){
                a++;
            }
            if(a==k){
                break;
            }
        }
        int b=s1.size();
        if(s1[b-1]==' '){
            s1.pop_back();
        }
        return s1;
    }
};