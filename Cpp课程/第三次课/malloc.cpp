#include <iostream>
using namespace std;
#include "stdlib.h"
#include "string.h"
int main()
 {
    int *pNum;
    pNum = (int *)malloc(sizeof(int));
    if (pNum == NULL) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }
    *pNum = 10;
    cout << pNum << " " << *pNum << endl;
    if (pNum != NULL) {
        free(pNum);
        pNum = NULL;
    }
    return 0;
}