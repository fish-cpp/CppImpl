#include <iostream>

using namespace std;

int main() {
    // 数组指针变量a是一个指针，指向一个int [4] 的数组
    int (*a)[4];

    int d[4] = {1, 2, 3, 4};

    // 获取数组d的地址，赋值给a
    a = &d;

    for (int i = 0; i < 4; ++i) {
        cout << "第" << i << "个元素的地址: " << a[i] << endl;
        cout << "第" << i << "个元素的值: " << (*a)[i] << endl;
    }

    return 0;
}