/**
 * @brief 分支语句
 * @author cppCodeDream
 */

#include <iostream>

using std::cout;
using std::endl;

/**
 * if分支语句
 */
void testIf() {
    int x = 10;
    if (x > 5) {
        cout << "x大于5" << endl;
    }
}

/**
 * if-else分支语句
 */
void testIfElse() {
    int x = 10;
    if (x > 5) {
        cout << "x大于5" << endl;
    } else {
        cout << "x小于等于5" << endl;
    }
}

/**
 * 嵌套if语句
 */
void testIfIf() {
    int x = 10;
    if (x > 5) {
        if (x < 20) {
            cout << "x大于5且小于20" << endl;
        } else {
            cout << "x大于等于20" << endl;
        }
    } else {
        cout << "x小于等于5" << endl;
    }
}

/**
 * if-else-if语句
 */
void testIfElseIf() {
    int num = 75;

    if (num > 90) {
        std::cout << "优秀" << std::endl;
    } else if (num > 80) {
        std::cout << "良好" << std::endl;
    } else if (num > 70) {
        std::cout << "中等" << std::endl;
    } else if (num > 60) {
        std::cout << "及格" << std::endl;
    } else {
        std::cout << "不及格" << std::endl;
    }
}

/**
 * switch语句
 * switch语句与break语句通常结合使用，以控制switch语句的执行流程
 * break语句用于在满足条件后终止switch语句的执行，避免继续执行其他case分支
 */
void testSwitch() {
    int day = 3;
    switch (day) {
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        default:
            cout << "其他星期" << endl;
            break;
    }
}



int main() {

    return 0;
}
