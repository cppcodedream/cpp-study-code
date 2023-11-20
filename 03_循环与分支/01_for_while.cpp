/**
 * @brief 循环语句
 * @author cppCodeDream
 */

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::cin;

/**
 * 基本for循环
 */
void testFor() {
    /**
     * for (初始化表达式; 循环条件; 循环迭代)
     *	- 初始化部分：在循环开始之前执行的语句，通常用于初始化循环变量。
     *	- 循环条件：在每次循环迭代之前进行评估的表达式，如果条件为真，则继续执行循环体；如果条件为假，则终止循环。
     *	- 循环迭代：在每次循环迭代之后执行的语句，通常用于更新循环变量的值
     */


    /**
     * 这是一个 for 循环标准结构。
     * int i = 1表示初始化表达式; i<=5 表示循环条件; i++表示循环迭代中括号内为循环体
     * 在循环开始之前，我们初始化一个整型变量 i，并将其设置为 1。
     * 条件表达式 i <= 5 检查 i 是否小于等于 5，如果满足条件，则执行循环体内的代码。
     * 在每次迭代结束后，我们通过 i++ 将 i 的值递增 1
     */
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    /**
     * for循环的执行顺序：
     * 初始化表达式：int i = 0。
     * 评估条件部分：i <= 5。
     * 如果条件为真，执行循环体。
     * 执行迭代部分：++i。
     * 重新评估条件部分：i <= 5。
     * 如果条件仍为真，则返回步骤 3，执行下一次循环迭代；如果条件为假，则终止循环
     */

    std::string str = "Hello";

    for (int i = 0; i < str.length(); ++i) {
        cout << str[i];
    }
    cout << endl;

}

/**
 * 修改步长
 */
void testChangeRange() {
    cout << "递增步长：" << endl;
    // 从0开始，每次递增2，打印0到9之间的偶数
    for (int i = 0; i < 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    cout << "递减步长：" << endl;
    // 从10开始，每次递减2，打印10到1之间的数
    for (int i = 10; i >= 1; i -= 2) {
        cout << i << " ";
    }
    cout << endl;

    //修改步长时需要确保循环条件仍然满足，以避免无限循环或跳过所需的迭代
}

/**
 * 范围for循环
 * 范围 for 循环，也称为 foreach 循环。
 * 范围 for 循环是一种便捷的循环结构，用于遍历容器类对象（如数组、字符串、向量、列表等）中的元素，而无需使用索引或迭代器。
 * 范围 for 循环可以通过遍历容器中的每个元素，依次执行相应的代码块
 */
void testForeach() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num: numbers) {
        std::cout << num << " ";
    }
    cout << endl;
}

/**
 * while循环
 * while 循环是一种在条件为真时重复执行代码块的循环结构
 * 它在每次迭代之前评估条件表达式，如果条件为真，则执行循环体，然后再次评估条件。只有当条件为假时，循环终止
 */
void testWhile() {
    int count = 0;
    int value;

    while (count < 5) {
        std::cout << "Enter a value: ";
        std::cin >> value;
        count++;
    }
    cout << "循环退出" << endl;
}

void testDoWhile() {
    int number;
    // 这段代码会要求用户输入一个正整数，如果用户输入的值小于 0，则会继续要求用户输入，直到输入一个大于等于 0 的正整数为止。
    // 这样可以确保在用户输入有效的正整数之前，循环至少执行一次

    do {
        cout << "请输入一个正整数";
        cin >> number;
    } while (number >= 0);

}


int main() {
    testFor();
    return 0;
}
