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

/**
 * break语句
 * break语句用于立即终止当前所在的循环（for、while、do-while）或switch语句的执行
 * 当程序执行到break语句时，循环会被终止，程序将直接跳出当前循环或switch语句
 * break语句通常与条件语句结合使用，用于提前跳出循环，避免不必要的迭代
 */
void testBreak() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        std::cout << i << " ";
    }
    // 输出结果：0 1 2 3 4
}

/**
 * continue语句
 * continue语句用于跳过当前循环中的剩余代码，并开始下一次循环
 * 当程序执行到continue语句时，程序将立即停止当前迭代，并开始下一次迭代
 * continue语句通常与条件语句结合使用，用于跳过特定的迭代
 */
void testContinue() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        std::cout << i << " ";
    }
    // 输出结果：0 1 2 3 4 6 7 8 9
}

// 需要注意的是，break和continue只对最内层的循环起作用。
// 如果嵌套多层循环，break和continue语句将只会跳出或跳过当前内层循环的执行，而不会影响外层循环

int main() {

    return 0;
}
