#include <iostream>

using namespace std;

/**
 * - 基于名称空间的模块化系统
 * - 基于包的模块化
 * - 基于文件的模块化
 */
namespace Math{
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    cout << "Math::add(1, 3): " << Math::add(1, 3) << endl;
    return 0;
}