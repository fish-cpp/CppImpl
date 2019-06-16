#include <iostream>

using namespace std;

/**
 * auto 关键字来让编译器自动类型推断
 * 类似于var
 * @return
 */
int main() {
    auto a = false;
    auto b = 'A';
    auto c = "hello";
    auto d = 123;

    cout << "typeid(a): " << typeid(a).name() << endl;
    cout << "typeid(b): " << typeid(b).name() << endl;
    cout << "typeid(c): " << typeid(c).name() << endl;
    cout << "typeid(d): " << typeid(d).name() << endl;

    return 0;
}
//typeid(a): b
//typeid(b): c
//typeid(c): PKc
//typeid(d): i