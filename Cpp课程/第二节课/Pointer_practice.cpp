#include<iostream>
using namespace std;


void swap1(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void swap2(int *p1, int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

}
int main(){

    int i,j;
    i=5;
    j=10;
    cout<<i<<":"<<j<<endl;
    //swap(i,j);
    //cout<<i<<":"<<j<<endl;

    int *a=&i;;
    int *b=&j;
    swap2(a,b);
    cout<<i<<":"<<j<<endl;
    return 0;
}