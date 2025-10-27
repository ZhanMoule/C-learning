#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "example.h"

CStudent::CStudent( )              //定义构造函数
{
	num=0;
	name = NULL;
	sex='m';
	cout<<num<<"Constructor called."<<endl<<endl;       //输出有关信息
}


CStudent::CStudent(int n,const char * na,char s )              //定义构造函数
{
	num=n;
	if (na) {
        name = new char[strlen(na) + 1];
        strcpy(name, na);
    } else {
        name = NULL;
    }
	sex=s;
	cout<<num<<"Constructor called."<<endl<<endl;       //输出有关信息
}

CStudent::~CStudent( )                                 //定义析构函数
{
    Clean();	
}       

void CStudent::Display( )                            
//定义成员函数
{
	cout<<"num: "<<num<<endl;
    cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl<<endl;
}

void CStudent::Clean( )                                 //定义析构函数
{
	cout<<num<<endl<<endl;
	if ( name != NULL)
	delete []name;
    name = NULL;
}

int main()
{
    CStudent s1(1001,"张三",'m');   //定义类的对象s1

    return 0;
}