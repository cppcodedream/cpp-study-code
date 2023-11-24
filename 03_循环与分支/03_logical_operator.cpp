/**
 * @brief 逻辑运算符
 * @author cppCodeDream
 */

#include <iostream>

using std::cout;
using std::endl;

/**
 * 逻辑运算符 & 和 &&
 * 逻辑与运算符&会对两个操作数进行按位与操作，无论操作数的值是true还是false，结果都会是true或false
 * &&会进行短路求值。如果第一个操作数的值为false，那么不会对第二个操作数进行求值，结果直接为false
 * 只有当第一个操作数的值为true时，才会对第二个操作数进行求值，结果才会根据第二个操作数的值确定
 */
void testAnd(){
	bool result1 = true & true;     // 逻辑与运算符，result1的值为true
	cout << "result1: " << result1 << endl;

	bool result2 = true & false;    // 逻辑与运算符，result2的值为false
	cout << "result2: " << result2 << endl;

	bool result3 = false & true;    // 逻辑与运算符，result3的值为false
	cout << "result3: " << result3 << endl;

	bool result4 = false & false;   // 逻辑与运算符，result4的值为false
	cout << "result4: " << result4 << endl;
	
	bool result5 = true && true;    // 逻辑与运算符，result5的值为true
	cout << "result5: " << result5 << endl;

	bool result6 = true && false;   // 逻辑与运算符，result6的值为false
	cout << "result6: " << result6 << endl;

	bool result7 = false && true;   // 逻辑与运算符，result7的值为false
	cout << "result7: " << result7 << endl;

	bool result8 = false && false;  // 逻辑与运算符，result8的值为false
	cout << "result8: " << result8 << endl;
}

/**
 * 逻辑运算符 | 和 ||
 * 逻辑或运算符|会对两个操作数进行按位或操作，无论操作数的值是true还是false，结果都会是true或false
 * ||也会进行短路求值。如果第一个操作数的值为true，那么不会对第二个操作数进行求值，结果直接为true。
 * 只有当第一个操作数的值为false时，才会对第二个操作数进行求值，结果才会根据第二个操作数的值确定
 */
void testOr(){
	bool result1 = true | true;     // 逻辑或运算符，result1的值为true
	cout << "result1: " << result1 << endl;

	bool result2 = true | false;    // 逻辑或运算符，result2的值为true
	cout << "result2: " << result2 << endl;

	bool result3 = false | true;    // 逻辑或运算符，result3的值为true
	cout << "result3: " << result3 << endl;

	bool result4 = false | false;   // 逻辑或运算符，result4的值为false
	cout << "result4: " << result4 << endl;
	
	bool result5 = true || true;    // 逻辑或运算符，result5的值为true
	cout << "result5: " << result5 << endl;

	bool result6 = true || false;   // 逻辑或运算符，result6的值为true
	cout << "result6: " << result6 << endl;

	bool result7 = false || true;   // 逻辑或运算符，result7的值为true
	cout << "result7: " << result7 << endl;

	bool result8 = false || false;  // 逻辑或运算符，result8的值为false
	cout << "result8: " << result8 << endl;
}

void testIfAnd(){
    bool isMember = true;      // 是否是会员
    bool hasCoupon = true;     // 是否有优惠券
    float totalAmount = 100.0; // 总金额

    if (isMember && hasCoupon) {
        std::cout << "会员且有优惠券，享受双重优惠。" << std::endl;
        totalAmount *= 0.8;  // 80%折扣
    } else if (isMember || hasCoupon) {
        std::cout << "会员或有优惠券，享受单一优惠。" << std::endl;
        totalAmount *= 0.9;  // 90%折扣
    } else {
        std::cout << "既不是会员也没有优惠券，不享受优惠。" << std::endl;
        // 不进行折扣操作
    }

    std::cout << "总金额：" << totalAmount << std::endl;
}

void testIfOr(){
	bool isAdmin = false;         // 是否是管理员
    bool hasWriteAccess = true;   // 是否有写权限
    bool hasReadAccess = true;    // 是否有读权限

    if (isAdmin || (hasWriteAccess && hasReadAccess)) {
        std::cout << "用户拥有系统的完全访问权限。" << std::endl;
    } else if (hasWriteAccess) {
        std::cout << "用户只有写权限。" << std::endl;
    } else if (hasReadAccess) {
        std::cout << "用户只有读权限。" << std::endl;
    } else {
        std::cout << "用户无访问权限。" << std::endl;
    }
}

// !：对一个条件进行取反操作。它会将true转换为false，将false转换为true
void testNot(){
    int age = 17;

    if (!(age >= 18)) {
        std::cout << "你还未满18岁，不能参加此活动。" << std::endl;
    } else {
        std::cout << "欢迎参加活动！" << std::endl;
    }
}

/**
 * 逻辑运算符优先级
 */
void testLevel(){
	int x = 5;
    int y = 10;
    int z = 15;

    bool result1 = x > y || x < z && y < z;
	std::cout << "Result1: " << result1 << std::endl;
	
	// 与result1等价
	bool result2 = (x > y) || (x < z && y < z);
	std::cout << "Result2: " << result2 << std::endl;
	
	// 在上述示例中，&是位运算符，用于对x和y的二进制位进行按位与操作。输出结果是0，而不是true或false
  
}

/**
 * 三目运算符
 * condition ? expression1 : expression2
 * condition 是一个表达式，用于评估一个条件。如果条件为真（非零），则整个表达式的结果是 expression1；如果条件为假（零），则结果是 expression2
 */
void testLevel(){
	
	
	int x = 5;
    int y = 10;

	// 如果 x 大于 y，则条件为真，整个表达式的结果为 x；否则，条件为假，整个表达式的结果为 y
    int max = (x > y) ? x : y;

    std::cout << "max Value: " << max << std::endl;
	
	int score = 85;

    std::string result = (score >= 60) ? "Pass" : "Fail";

    std::cout << "Result: " << result << std::endl;
}


int main() {

    return 0;
}
