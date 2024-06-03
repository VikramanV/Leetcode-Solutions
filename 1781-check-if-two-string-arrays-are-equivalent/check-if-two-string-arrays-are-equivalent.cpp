class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1;
        string s2;
        bool res;
        int a=word1.size();
        int b=word2.size();
        for(int i=0;i<a;i++){
            s1=s1+word1[i];
        }
        for(int j=0;j<b;j++){
            s2=s2+word2[j];
        }
        if(s1==s2){
            res=true;
        }
        else{
            res=false;
        }
        return res;
    }
};