/**
 * @brief 其他数据类型-枚举
 * @author cppCodeDream
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// 定义一个名为 Weekday 的枚举类型，表示周一到周天。Weekday可以省略
// Monday、Tuesday..等称为枚举量，默认情况下，第一个枚举量的值为0，第二个为1..以此类推
enum Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} yesterday, tommorrow, now = Thursday;
// 在定义枚举类型时，同时声明变量并赋值


void testEnum() {

    // 声明和初始化枚举变量
    Weekday today = Thursday;
    cout << "today:" << today << endl;

    // 先声明枚举变量，再对变量赋值
    enum Weekday day1, day2, day3;

    // 声明枚举变量时同时赋值
    enum Weekday day4 = Tuesday, day5 = Wednesday, day6 = Thursday;

    // 定义类型时同时声明变量，再对变量赋值
    yesterday = Friday;
    tommorrow = Sunday;


    // 对枚举类型赋整数类型值时，需要类型转换
    today = (enum Weekday) (yesterday + 1);

    /**
    * 一些使用方法
    */
    // 1. 使用枚举常量进行条件判断
    if (today == Monday) {
        // ...
    }

    // 2. 使用switch语句根据不同枚举值执行不同操作
    switch (today) {
        case Monday:
            // 执行周一的操作
            break;
        case Tuesday:
            // 执行周二的操作
            break;
            // ... 其他枚举常量的处理

    }

    // 3. 循环遍历枚举常量
    for (int day = Monday; day <= Sunday; day++) {
        // 输出每一天的名称
        switch (day) {
            case Monday:
                cout << "Monday" << endl;
                break;
            case Tuesday:
                cout << "Tuesday" << endl;
                break;
                // ... 其他枚举常量的处理
        }
    }

}


enum class EnumName; // 前置声明


enum class EnumName : int {
    Constant1,
    Constant2,
    Constant3,
    // ...
};

void testCpp11Enum() {
    // 1. 作用域限定
    EnumName variable = EnumName::Constant1;

    // 2. 隐式类型转换限制
    // int value = variable; 错误 无法隐式转换为整数类型

    // 3. 底层整数类型的控制
    // 允许显式指定底层整数类型，使用 enum class 后面跟着一个冒号和整数类型。

    // 4. 可以先声明 再定义


}


int main() {
    testEnum();
    return 0;
}