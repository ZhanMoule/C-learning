//
// Created by admin on 25-6-29.
//
#include <iostream>
using namespace std;
int aplus(int a,int b) {
    int c;
    c=a+b;
    return c;
}
int main() {
    cout << "pleaas enter two words" << endl;
    int a,b;
    cin >> a >> b;
    cout << "the sum is" << aplus (a,b) << endl;
    return 0;
}