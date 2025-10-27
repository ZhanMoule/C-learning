#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>

class CStudent             //声明类类型Student
{ 
private:
		int num;
		char * name;
		char sex;
public:
		CStudent();
		CStudent(int n,const char * na,char s);              //定义构造函数
		~CStudent();                                 //定义析构函数
		void Display();
		void Clean();
};
