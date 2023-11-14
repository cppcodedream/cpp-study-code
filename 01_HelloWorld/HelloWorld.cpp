/**
 * @file HelloWorld.cpp
 * @brief HelloWorld
 * @date 2023/10/26
 * @author caicai
 */
 
// 表示单行注释
/*
表示
多行注释
*/

// 预处理指令，用于包含头文件<iostream>
#include <iostream>

// 使用命名空间(namespace)std中的cout和endl
using std::cout; // 标准输出流
using std::endl; // 控制台换行符

// 定义test函数
void test() {
	// 在控制台输出文本
    cout << "Hello 大家好 我是caicai" << endl;
    cout << "一起来学习C++吧！" << endl;
}

// 主函数main，在程序执行时首先执行的函数
int main() {
    test();
    return 0;
}