/**
 * @file 01_variable.cpp
 * @brief 变量
 * @date 2023/11/02
 * @author caicai
 */

//变量名由字母、数字和下划线组成。
//变量名必须以字母或下划线开头。
//变量名区分大小写。
//变量名不能是C++的关键字（如 int、float、bool 等）

#include <iostream>


using std::cout;
using std::endl;

int number = 100;  // 全局变量
const double PI = 3.1415926;

void test() {

    // 局部变量
    // 合法的变量名和初始化
    int age = 25;
    double salary = 5000.50;
    char letter = 'A';
    bool isStudent = true;
    int numberOfApples = 10;
    float averageScore = 85.5;
    int x = 1, y = 2, z = 3; // 多个变量声明和初始化

    // 不合法的变量名
    // int 123abc = 10; // 以数字开头
    // float 3.14 = 3.14; // 以数字开头
    // bool is@home = true; // 含有特殊字符@
    // double my-salary = 5000.50; // 含有特殊字符-
    // char first name = 'J'; // 含有空格
    // int int = 5; // 使用了C++的关键字作为变量名

    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "Letter: " << letter << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Number of Apples: " << numberOfApples << endl;
    cout << "Average Score: " << averageScore << endl;
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

}

void testAuto() {
    // auto 关键字可以使编译器根据变量的初始化表达式推断出变量的类型，从而简化类型声明的过程
    auto x = 42;  // 推导出 x 的类型为 int
    auto name = "John";  // 推导出 name 的类型为 const char*

    auto func = [](int x) { return x * 2; };  // 推导出 func 的类型为 lambda 函数类型
    auto ptr = new int(5);  // 推导出 ptr 的类型为 int*
}


int main() {
    number = 111;
    // age = 10;
    test();
    return 0;
}