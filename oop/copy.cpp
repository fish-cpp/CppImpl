#include <iostream>

using namespace std;

/**
 * public private和Java一样
 * c++中没有包，相对于Java少了一个包访问权限
 * protected是子类可以访问
 *
 * this是指向自己的指针
 */
class Person {
public:
    string name;
    void sayName(){
        std::cout << this->name << endl;
    }


protected:
    string address;

private:
    int age;
};

/**
 * new Person() 返回新创建对象的地址
 * @return
 */
int main() {
    // 指向Person对象的指针
    Person* personP = new Person();
    personP->name = "Jon";
    personP->sayName();
    cout << "typeof(personP): " << typeid(personP).name() << endl;

    Person person = *personP;
    person.name = "Jack";
    person.sayName();
    cout << "typeof(person): " << typeid(person).name() << endl;

    return 0;
}
//Jon
//typeof(personP): P6Person
//Jack
//typeof(person): 6Person
