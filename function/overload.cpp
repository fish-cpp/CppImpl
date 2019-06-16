#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}
double add(double a, double b){
    return a + b;
}
/**
 * 内联函数在编译阶段将函数插入指定位置以避免函数调用的开销
 * 代价是代码膨胀，复制函数不适合这样写。
 * @return
 */
int main() {
    cout << "add(1, 2): " << add(1, 2)  << endl;
    cout << "add(1.2, 2.7): " << add(1.2, 2.7)  << endl;
    return 0;
}