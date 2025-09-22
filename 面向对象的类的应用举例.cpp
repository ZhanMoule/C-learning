#include <iostream>

//
// Created by admin on 25-7-8.
//
#include <iostream>
using namespace std;
class Time {
public:
    int hour,minute,second;

};
int main() {
    Time t1;
    cin>>t1.hour>>t1.minute>>t1.second;
    cout<<t1.hour<<":"<<t1.minute<<":"<<t1.second<<endl;;
    return 0;
}
