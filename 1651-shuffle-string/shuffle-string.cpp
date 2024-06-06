class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       string  b;
       int n=indices.size();
       b.resize(n);
       for(int i=0;i<n;i++){
        b[indices[i]]=s[i];
        }
       return b;
    }
};