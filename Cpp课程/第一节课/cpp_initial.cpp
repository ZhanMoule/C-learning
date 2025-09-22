
/**
 * @file cpp入门类
 * @author moule
 * @brief cpp入门类 
 * @date 2025-09-22
 * @copyright  Copyright (c) 
 * @todo
 *      
 */
#include <iostream>
#include "cpp_initial.h"
using namespace std;

void CTime::SetTime(){
    cout<<"h=:"<<endl;
    cin>>m_iH;
    cout<<endl<<"s=:";
    cin>>m_iM;

}
void CTime::Disp(){
    cout<<m_iH<<":"<<m_iM<<":"<<m_iS<<endl;
}

int main(){
    CTime t1;
    t1.SetTime();
    t1.Disp();
    return 0;
}
