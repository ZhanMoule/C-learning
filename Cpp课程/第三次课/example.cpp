#include <iostream>
using namespace std;
int main()
 {
    struct SDay
    {
        int y;
        int m;
        int d;
    };
    int i;
    i=5;
    cout << "i=" << i << endl;

    SDay cs;
    cs.y=2024;
    cs.m=6; 
    cs.d=15;

    struct SStudent{
        int Num;
        char *Name;
        SDay rx;

    };
    SStudent stu1;
    stu1.rx.y=2022;
    stu1.rx.m=9;
    stu1.rx.d=1;


    return 0;
}