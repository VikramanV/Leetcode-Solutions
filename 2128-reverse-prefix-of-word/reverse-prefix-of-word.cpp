class Solution {
public:
    string reversePrefix(string word, char ch) {
    string str;
    int a=0;
    for(int i=0;i<word.size();i++){
        if(word[i]==ch){
            a=i;
            break;
        }
    }
    for(int j=a;j>=0;j--){
        str=str+word[j];
    }
    for(int k=a+1;k<word.size();k++){
        str=str+word[k];
    }
    return str;
    }
};