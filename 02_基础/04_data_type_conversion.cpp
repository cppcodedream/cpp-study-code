/**
 * @brief 数据类型转换
 * @author cppCodeDream
 */

#include <iostream>

using std::cout;
using std::endl;

void test() {

    double d = 3.14;
    int i = static_cast<int>(d);    // 将浮点数转换为整数
    cout << "i:" << i << endl;

    const int *p1 = new int(5);
    int *p2 = const_cast<int *>(p1);  // 移除指针的const属性
    cout << "p2:" << p2 << endl;
    cout << "*p2:" << *p2 << endl;

    int x = 10;
    int *p3 = reinterpret_cast<int *>(x);  // 将整数转换为指针
    // 这里可能会引发运行时错误，因为 p3 指向一个未知的地址
}

/**
 * 数据类型转换时要注意的问题
 */
void testDanger() {

    double pi = 3.14;
    int i = static_cast<int>(pi);  // i的值为3，小数部分被截断
    cout << "i:" << i << endl;

    // 整数溢出
    int ii = 2147483647;  // int类型的最大值
    short s = static_cast<short>(ii);  // s的值可能会溢出，因为超出了short类型的表示范围
    cout << "s:" << s << endl;


    // 浮点数精度损失
    double d = 3.141592653589793;
    float f = static_cast<float>(d);  // f的值可能会损失一些小数位的精度
    cout << "f:" << f << endl;


    int iii = 1000;
    char c = static_cast<char>(iii);  // c的值可能是一个无效字符，因为超出了char类型的表示范围
    cout << "c:" << c << endl;

}

int main() {
//    test();
    testDanger();
    return 0;
}