#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int len=s.length();
        if (len%2!=0)return false;
        stack<char> stk;
        for (int i=0;i<len;i++){
            if (s[i]=='(') stk.push(')');
            else if (s[i]=='[') stk.push(']');
            else if (s[i]=='{') stk.push('}');
            else {
                if (stk.empty()||stk.top()!=s[i]) return false;
                else stk.pop();
            }
        }

        return stk.empty();
    }
};

int main(){
    Solution s;
    string str="()[]{}";
    cout<<s.isValid(str)<<endl;
    return 0;
}