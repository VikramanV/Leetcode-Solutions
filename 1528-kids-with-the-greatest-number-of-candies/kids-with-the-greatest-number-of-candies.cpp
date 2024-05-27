class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>arr;
       int a=candies.size();
       int aa=0;
       for(int i=0;i<a;i++){
        if(candies[i]>aa){
            aa=candies[i];
        }
       }
       for(int j=0;j<a;j++){
        if(candies[j]+extraCandies >=aa){
            arr.push_back(true);
        }
        else{
            arr.push_back(false);
        }
       }
       return arr;
    }
};