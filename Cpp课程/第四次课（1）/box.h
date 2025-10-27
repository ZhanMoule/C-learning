//头文件用于设计类
class CBox
{
    protected:
        int m_iH; //高度
        int m_iW; //宽度
        int m_iL; //长度
    public://公有成员函数
        void ShuRu(); //输入数据
        int Vol();//用于计算体积，返回值为整形
        void Disp();
};