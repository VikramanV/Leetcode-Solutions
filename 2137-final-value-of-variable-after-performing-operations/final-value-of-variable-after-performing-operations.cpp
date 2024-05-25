class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int a=operations.size();
        for(int i=0;i<a;i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                x--;
            }
            else{
                x++;
            }
        }
        return x;
        
    }
};