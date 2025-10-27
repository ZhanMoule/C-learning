#include <iostream>
#include "box.h"
//这里的CBox::表示是类CBox中的成员函数
void CBox::ShuRu()//在这里定义输入函数
{
    std::cout << "请输入长、宽、高（以空格隔开）: ";
    std::cin >> m_iL >> m_iW >> m_iH;
}

int CBox::Vol()//在这里定义计算体积的函数
{
    int v;
    v = m_iL * m_iW * m_iH;
    return v;
}

void CBox::Disp()//在这里定义显示体积的函数
{
    std::cout << "长=" << m_iL << ",宽=" << m_iW << ",高=" << m_iH << std::endl;
    std::cout << "体积=" << Vol() << std::endl;
}

int main()
{
    CBox box1; //定义类的对象box1
    box1.ShuRu(); //调用输入函数
    box1.Disp(); //调用显示体积函数
    return 0;
}