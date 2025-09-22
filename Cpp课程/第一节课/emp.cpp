#include "emp.h"
#include <iostream>
#include <string.h>
using namespace std;

int CEmp::No=1000;
CEmp::CEmp(){
    char Name[50];
    std::cout<<"请输入姓名：";
    cin>>Name; 
    m_cName=(char *)malloc(strlen(Name)+1);
    strcpy(m_cName,Name);
    m_dPay=0;
    No+=1;
    m_iNum=No;
    
};

CEmp::~CEmp(){
    if (m_cName!=NULL){
        free(m_cName);
        m_cName=NULL;
    }
};
int main(){
    CTec t1;
    t1.Pay();
    t1.Disp();

    CTec t2;
    CSal s2;
    CMan m2;
    CSalMan sm2;
    CEmp *p;
    p=&t2;
    p->Pay();   
    p->Disp(); 
}
