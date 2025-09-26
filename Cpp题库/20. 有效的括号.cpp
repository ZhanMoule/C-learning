#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int a=0;
        for (int i=0;i<(int)s.length();){
            switch (s[i]){
                case '(': 
                    a=i;
                    while (i<(int)s.length()){
                        if (s[i]==')'){
                            s.erase(i,1);
                            s.erase(a,1);
                            break;
                        }
                        i++;
                    }
                    break;
                case '{':
                    a=i;
                    while (i<(int)s.length()){
                        if (s[i]=='}'){
                            s.erase(i,1);
                            s.erase(a,1);
                            break;
                        }
                        i++;
                    }
                    break;
                case '[':
                    a=i;
                    while (i<(int)s.length()){
                        if (s[i]==']'){
                            s.erase(i,1);
                            s.erase(a,1);
                            break;
                        }
                        i++;
                    }
                    break;
                default:
                    break;
            }
            // 防止死循环
            if (s.empty() || i >= (int)s.length()) break;
        }
        if (s.length()==0) return true;
        else return false;
    }
};

int main(){
    Solution s;
    string str="()[]{}";
    cout<<s.isValid(str)<<endl;
    return 0;
}