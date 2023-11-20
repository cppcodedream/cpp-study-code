/**
 * @brief 其他数据类型-联合体
 * @author cppCodeDream
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


// 定义一个名为MyUnion的联合体
union MyUnion {
    // 成员将共享同一块内存空间
    int intValue;
    float floatValue;
    char charValue;
};


void testUnion() {

    MyUnion myUnion;
    myUnion.intValue = 42;        // 将整型值 42 存储在union中
    cout << myUnion.intValue;     // 输出union中的整型值

    myUnion.floatValue = 3.14;    // 将浮点型值 3.14 存储在union中
    cout << myUnion.floatValue;   // 输出union中的浮点型值
}


int main() {
    testUnion();
    return 0;
}