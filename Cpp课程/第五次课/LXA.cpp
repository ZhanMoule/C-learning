#include "box.h"
#include <iostream>

CBox::~CBox()//析构函数
{
    cout<<"Box "<< No <<" destroyed."<<endl;
}

void CBox::Disp()
{
    cout<<(H*W*L)<<endl;
}

int main()
{
    CBox box1(2,3,4,1);
    CBox box2(3,4,5,2);
    box1.Disp();
    box2.Disp();
    CBox *p;
    p=new CBox(4,5,6,3);
    p->Disp();
    delete p;

    CBox &b3=box1;
    b3.Disp();
    box1.Disp();
    return 0;
}