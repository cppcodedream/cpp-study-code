/**
 * @file 01_data_type.cpp
 * @brief 基本数据类型
 * @date 2023/10/27
 * @author caicai
 */


#include <iostream>


using std::cout;
using std::endl;

// 使用sizeof()来获取它们的占用字节数
void test() {
    // 有符号整数类型
    short myShort = 10; // 2字节
    std::cout << "short: " << myShort << ", Size: " << sizeof(myShort) << " bytes" << std::endl;

    int myInt = 20; // 4字节
    std::cout << "int: " << myInt << ", Size: " << sizeof(myInt) << " bytes" << std::endl;

    long myLong = 100000; // 4或8字节，取决于系统
    std::cout << "long: " << myLong << ", Size: " << sizeof(myLong) << " bytes" << std::endl;

    long long myLongLong = 1000000000; // 8字节
    std::cout << "long long: " << myLongLong << ", Size: " << sizeof(myLongLong) << " bytes" << std::endl;

    // 无符号整数类型
    unsigned short myUnsignedShort = 30; // 2字节
    std::cout << "unsigned short: " << myUnsignedShort << ", Size: " << sizeof(myUnsignedShort) << " bytes"
              << std::endl;

    unsigned int myUnsignedInt = 40; // 4字节
    std::cout << "unsigned int: " << myUnsignedInt << ", Size: " << sizeof(myUnsignedInt) << " bytes" << std::endl;

    unsigned long myUnsignedLong = 100000; // 4或8字节，取决于系统
    std::cout << "unsigned long: " << myUnsignedLong << ", Size: " << sizeof(myUnsignedLong) << " bytes" << std::endl;

    unsigned long long myUnsignedLongLong = 1000000000; // 8字节
    std::cout << "unsigned long long: " << myUnsignedLongLong << ", Size: " << sizeof(myUnsignedLongLong) << " bytes"
              << std::endl;

    // 浮点数类型
    float myFloat = 3.14f; // 4字节
    std::cout << "float: " << myFloat << ", Size: " << sizeof(myFloat) << " bytes" << std::endl;

    double myDouble = 3.14159; // 8字节
    std::cout << "double: " << myDouble << ", Size: " << sizeof(myDouble) << " bytes" << std::endl;

    // 字符类型
    char myChar = 'A'; // 1字节
    std::cout << "char: " << myChar << ", Size: " << sizeof(myChar) << " bytes" << std::endl;

    // 无符号字符类型
    unsigned char myUnsignedChar = 'B'; // 1字节
    std::cout << "unsigned char: " << myUnsignedChar << ", Size: " << sizeof(myUnsignedChar) << " bytes" << std::endl;
}


int main() {
    test();
    return 0;
}