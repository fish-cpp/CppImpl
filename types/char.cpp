#include <iostream>

using namespace std;

/**
 * char类型只能存储一个字节，范围就是ASCII
 * 字符太长会发生截断
 * @return
 */
int main() {
    char c1 = 'A';
    char c2 = L'中';
    char c3 = L'🐸';
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;

    wchar_t wc1 = 'A';
    wchar_t wc2 = L'中';
    wchar_t wc3 = L'🐸';
    cout << "wc1: " << wc1 << endl;
    cout << "wc2: " << wc2 << endl;
    cout << "wc3: " << wc3 << endl;
    wcout << "wc1: " << wc1 << endl;
    wcout << "wc2: " << wc2 << endl;
    wcout << "wc3: " << wc3 << endl;

    return 0;
}
//c1: A
//c2: -
//c3: 8
//wc1: 65
//wc2: 20013
//wc3: 128056