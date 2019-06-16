#include <iostream>

using namespace std;

int main() {
    // 在堆内存中申请一块空间
    int* aP = new int();
    *aP = 1234;

    cout << "*aP: " << *aP << endl;

    // 释放指针指向的内存
    delete aP;
    return 0;
}