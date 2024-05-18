class Solution {
public:
    string interpret(string command) {
        string a;
        for(int i=0;i<command.size();i++){
            if(command[i]=='('&&command[i+1]==')'){
                a=a+'o';
                i++;
            }
            else if(command[i]=='('||command[i]==')'){
                continue;
                a=a+command[i+1];
                i++;
            }
            else{
                a=a+command[i];
            }
        }
        return a;
    }
};