#include <iostream>

using namespace std;

class Dog {
public:
    string name;
    void sayName() const {
        cout << this->name << endl;
    }
    void addAge(int age) {
        this->age = this->age + age;
    }

    Dog(const string &name){
        this->name = name;
    }

    // 使用初始化列表来构造我们的对象，和注释代码功能一样
    Dog(const string &name, const string &address, int age) : name(name), address(address), age(age) {
        // this->name = name;
        // this->address = address;
        // this->age = age;
    }

    /**
     * 释放对象时调用
     */
    virtual ~Dog() {
        cout << "Game Over" << endl;
    }

protected:
    /**
     * 常成员变量用const
     * 只能在初始化列表中初始化
     * 后续的值不能修改
     */
    const string address;

private:
    int age;

    /**
     * 常成员函数中不能修改成员变量的值
     * 算是纯函数的设计
     * @return
     */
    int getAge() const {
        // age++;
        return age;
    }
};

class Dead {
public:
    string name;
    string getName() const {
        return name;
    }
};

int main() {
    Dog* dogP = new Dog("Jon", "Japan", 33);
    dogP->sayName();
    dogP->addAge(3);
    delete dogP;

    const Dog* dogP2 = new Dog("Jack", "Japan", 99);
    // 在const对象中，不能调用非const的成员函数
    // c++ 确实设计的很复杂，很强大
    // dogP2->addAge(3);

    return 0;
}
