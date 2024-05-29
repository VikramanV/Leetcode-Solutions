class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int a=sentences.size();
        int count=0;
        int c=1;
        for(int i=0;i<a;i++){
            string aa=sentences[i];
            int b=aa.size();
            for(int j=0;j<b;j++){
                if(aa[j]==' '){
                    c++;
                }
            }
            if(c>count){
                    count=c;
            }
            c=1;
        }
        return count;
    }
};