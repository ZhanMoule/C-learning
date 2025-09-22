class CEmp{
    protected:
        char *m_cName;
        int m_iNum;
        double m_dPay;
        static int No;
    public:
        CEmp();
        ~CEmp();
        void Pay();
        void Disp();

};
class CTec : public CEmp{
    protected:
        int m_iHourRate;
        float m_fHours;
    public:
        CTec();
        ~CTec();
        void Pay();
        void Disp();
};
class CSal : public CEmp{//销售员的工资费率
    protected:
        float m_SaleRate;
        double m_dSales;
    public:
        CSal();
        ~CSal();
        void Pay();
        void Disp();
};

class CMan :public CEmp{//经理的工资
    protected:
        double m_dSalary;
    public:
        CMan();
        ~CMan();
        void Pay();
        void Disp();
};
    
class CSalMan:public CSal,public CMan{//销售经理
    public:
        CSalMan();
        ~CSalMan();
        void Pay();
        void Disp();
};