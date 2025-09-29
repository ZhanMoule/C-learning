#include <iostream>
using namespace std;
int main(){

    int i;
    i=10;
    int *p; //定义一个指针变量
    p=&i; //取变量i的地址赋值给指针变量p

    cout<<i<<endl;
    cout<<p<<endl;//输出对应i的地址；
    cout<<*p<<endl;

    (*p)=200;
    cout<<i<<endl;
    cout<<*p<<endl<<&i<<endl;






    return 0;
}