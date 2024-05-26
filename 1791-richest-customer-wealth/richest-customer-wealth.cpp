class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int aa=0;
        for(int i=0;i<n;i++){
            vector<int>arr=accounts[i];
            int x=arr.size();
            int ab=0;
            for(int j=0;j<x;j++){
                ab=ab+arr[j];
            }
            if(ab>aa){
                aa=ab;
            }
        }
        return aa;
    }
};