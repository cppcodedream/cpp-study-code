/**
 * @brief 算术运算符
 * @author cppCodeDream
 */


#include <iostream>

using std::cout;
using std::endl;


void testCppOperator() {

    int a = 5;
    int b = 3;

    int sum = a + b;     // 加法运算符，sum的值为8
    cout << "sum:" << sum << endl;

    int difference = a - b;  // 减法运算符，difference的值为2
    cout << "difference:" << difference << endl;

    int product = a * b;     // 乘法运算符，product的值为15
    cout << "product:" << product << endl;


    int quotient = a / b;    // 除法运算符，quotient的值为1
    cout << "quotient:" << quotient << endl;

    int remainder = a % b;   // 取模运算符可用于计算整数相除后的余数，remainder的值为2， 因为 5 除以 3 余 2
    cout << "remainder:" << remainder << endl;

    int x = 3;
    int y = ++x;    // 自增运算符，x的值为4，y的值为4
    cout << "y:" << y << endl;

    int m = 7;
    int n = m--;    // 自减运算符，n的值为7，m的值为6，
    cout << "n:" << n << "\tm:" << m << endl;

}

void testCppOperatorLevel() {
    /**
     * 优先：一元运算符（如自增和自减运算符）：++x, --x
     * 其次：乘法、除法和取模运算符：*, /, %
     * 最后：加法和减法运算符：+, -
    */
    int a = 5;
    int b = 3;
    int c = 2;

    int result1 = a + b * c;    // 先乘法后加法，result1的值为11

    int result2 = (a + b) * c;  // 先加法后乘法，result2的值为16

    int result3 = a * b / c;    // 先乘法后除法，result3的值为7

    int result4 = a / b * c;    // 先除法后乘法，result4的值为10

    int result5 = a - b + c;    // 先减法后加法，result5的值为4

    int result6 = a + b % c;    // 先取模后加法，result6的值为6

    int result7 = a % b + c;    // 先取模后加法，result7的值为4

    int result8 = a / (b + c);  // 先加法后除法，result8的值为1

    int result9 = (a - b) / c;  // 先减法后除法，result9的值为1

    int result10 = a++ + b;     // 先加法后自增，result10的值为8，a的值变为6

    int result11 = ++a + b;     // 先自增后加法，result11的值为9，a的值为6

    int result12 = a-- - b;     // 先减法后自减，result12的值为3，a的值变为4

    int result13 = --a - b;     // 先自减后减法，result13的值为2，a的值为4

}


int main() {
    testCppOperatorLevel();
    return 0;
}