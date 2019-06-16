#include <iostream>

using namespace std;

/**
 * & 本质上就是为基本类型添加引用
 * java中只能添加对对象的引用，而不能添加对基本类型的引用
 * c++ 中可以
 * @return
 */
int main() {
    int a = 111;
    int& a1 = a;

    cout << "a的地址: " << &a << endl;
    cout << "a1的地址: " << &a1 << endl;

    cout << "a的类型: " << typeid(a).name() << endl;
    cout << "a1的地址: " << typeid(a1).name() << endl;

    return 0;
}
//a的地址: 0x7fff57aad9e8
//a1的地址: 0x7fff57aad9e8
//a的类型: i
//a1的地址: i