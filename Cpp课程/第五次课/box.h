#include <iostream>
using namespace std;
class CBox
{
    private:
        int H;
        int W;
        int L;
        int No;
    public:
        CBox(int h, int w, int l, int no) : H(h), W(w), L(l), No(no) {
            cout << "Box " << No << " created." << endl;
        }//相当于成员函数内部的实现
    
        virtual ~CBox(); //析构函数声明
        void Disp();
};
