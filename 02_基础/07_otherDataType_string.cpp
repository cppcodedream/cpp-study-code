/**
 * @file 07_otherDataType_string.cpp
 * @brief 其他数据类型-字符串
 * @author cppCodeDream
 */


#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void testC() {

    // C语言风格的字符串使用字符数组表示，以空字符（'\0'）作为字符串的结尾标志
    char a[5] = {'1', '2', '3', '4', '5'};   //这是一个字符数组
    char b[5] = {'1', '2', '3', '4', '\0'};  //这是一个字符串

    // 初始化字符串
    char name[7] = "caicai"; // 预留一个空字符的位置
    char namecpp[] = "caicaicpp";

    // 字符串输入
    char food[10];
    cout << "请输入你喜欢的食物：";
    // 注意：cin使用空白(空格，换行符，制表符)确定输入边界，这意味着输入的字符串中不能含有空格(一次性只能输入一个单词)
    cin >> food;

    // 使用getline()解决上面问题
    char input[20];
    cout << "测试使用getline：";
    cin.getline(input, 20);// 使用cin.getline()读取一行字符串
    cout << "你的输入是：" << input << endl;

}

// 创建字符串
void testCppStringCreate() {

    // C++风格的字符串使用std::string类表示，它是C++标准库提供的字符串类型，内部封装了字符数组以及字符串的各种操作函数
    // 需要引入 <string>

    std::string str1 = "xiaocai"; // 默认构造函数创建字符串
    std::string str2("xiaocai"); // 使用字符串字面值初始化字符串对象
    std::string str3(5, 'A'); // 创建一个包含5个重复字符'A'的字符串
    std::string str4(str1); // 使用另一个字符串对象初始化新的字符串对象
    std::string str5(str1, 0, 4); // 使用原字符串的子字符串初始化新的字符串
    std::string str6(str1.begin(), str1.begin() + 3); //  使用迭代器范围内的字符初始化新的字符串对象

    cout << "str1：" << str1 << endl;
    cout << "str2：" << str2 << endl;
    cout << "str3：" << str3 << endl;
    cout << "str4：" << str4 << endl;
    cout << "str5：" << str5 << endl;
    cout << "str6：" << str6 << endl;

}

// 字符串追加、相加等
void testCppStringAdd() {
    std::string str1 = "xiao";
    std::string str2 = "cai";

    str1 += str2; // 将 str2 追加到 str1 的末尾
    cout << "str1 += str2 的值为：" << str1 << endl; // 输出 "xiaocai"


    std::string str3 = "Hello";
    std::string str4 = " c++!";
    std::string str5 = str3 + str4;
    cout << "str5的值为：" << str5 << endl; // 输出 "Hello c++"


    str3.append(str4); // 将str4追加到str3末尾
    cout << "str3追加后的值为：" << str3 << endl; // 输出 "Hello c++"

    str4.insert(4, "good"); // 在索引为4的位置插入 'good'字符串
    cout << "str4：" << str4 << endl;

}


// 字符串遍历
void testCppStringIterator() {
    std::string str1 = "xiaocai";

    cout << "使用下标运算符（[]）进行遍历和存取" << endl;
    for (size_t i = 0; i < str1.length(); ++i) {
        // 使用[下标]访问元素
        char ch = str1[i];
        cout << ch << " ";
    }
    cout << endl;

    cout << "使用范围for循环进行遍历和存取" << endl;
    for (char ch: str1) {
        cout << ch << " ";
    }
    cout << endl;


    cout << "使用迭代器进行遍历和存取" << endl;
    for (auto it = str1.begin(); it != str1.end(); ++it) {
        char ch = *it;
        cout << ch << " ";
    }
    cout << endl;

}

// 字符串大小
void testCppStringSize() {

    std::string str1 = "xiaocai";
    // 获取字符串容量
    cout << "str1的容量为：" << str1.capacity() << endl;

    // 获取字符串长度
    cout << "str1的长度为：" << str1.length() << endl;
    cout << "str1的长度为：" << str1.size() << endl;

    // 判断字符串是否为空
    cout << "str1是否为空：" << str1.empty() << endl;
}


// 提取字符串子串(截断字符串)
void testCppStringSub() {
    std::string str = "Hello, World!";

    // 1. substr() 函数
    std::string sub1 = str.substr(7);        // 从位置 7 开始提取到末尾
    std::string sub2 = str.substr(7, 5);     // 从位置 7 开始提取 5 个字符

    std::cout << "sub1: " << sub1 << std::endl;  // 输出 "World!"
    std::cout << "sub2: " << sub2 << std::endl;  // 输出 "World"

    // 2. 使用迭代器指定子串的开始和结束位置
    std::string::iterator start = str.begin() + 7;      // 子串起始位置
    std::string::iterator end = str.begin() + 12;       // 子串结束位置

    std::string sub(start, end);  // 使用迭代器定义子串
    std::cout << "Sub: " << sub << std::endl;  // 输出 "World"

    // 3. copy函数
    char buffer[6];

    str.copy(buffer, 5, 7);  // 从位置 7 开始复制 5 个字符到 buffer

    std::cout << "Sub: " << buffer << std::endl;  // 输出 "World"

}

// 字符串中删除子串和清空
void testCppStringRemoveAndClear() {

    // 1. erase() 函数
    std::string str = "Hello, World!";
    str.erase(7, 6);  // 从位置 7 开始删除 6 个字符
    std::cout << str << std::endl;  // 输出 "Hello!"

    // 2. 使用迭代器
    std::string::iterator start = str.begin() + 7;      // 要删除的起始位置
    std::string::iterator end = str.begin() + 13;       // 要删除的结束位置
    str.erase(start, end);  // 删除指定范围内的字符
    std::cout << str << std::endl;  // 输出 "Hello!"

    // 3. pop_back()函数：用于删除字符串的最后一个字符
    str.pop_back();  // 删除最后一个字符
    std::cout << str << std::endl;  // 输出 "World"

    // 4. clear() 函数将字符串的内容清空，使其成为空字符串
    str.clear();  // 清空字符串
    std::cout << str << std::endl;  // 输出空字符串

    // 5. resize() 函数可以调整字符串的大小，并将其元素清空
    std::string str1 = "Hello, World!";
    str1.resize(0);  // 调整字符串大小为0，清空元素
    std::cout << str1 << std::endl;  // 输出空字符串

}

// 字符串比较
void testCppStringCompare() {

    // 如果两个字符串长度不同，则较短的字符串被视为小于较长的字符串。
    // 从字符串的第一个字符开始，依次比较对应位置的字符的编码值。
    // 如果在某个位置上两个字符的编码值不同，则较小编码值的字符被视为小于较大编码值的字符。
    // 如果在已比较的位置上两个字符串完全相同，但其中一个字符串较长，则较长的字符串被视为大于较短的字符串。

    // 1. 可以直接使用比较运算符（==、!=、<、>、<=、>=）来比较两个字符串的大小
    std::string str1 = "Hello";
    std::string str2 = "World";

    if (str1 == str2) {
        std::cout << "str1与str2相等" << std::endl;
    } else {
        std::cout << "str1与str2不相等" << std::endl;
    }

    if (str1 < str2) {
        std::cout << "str1小于str2" << std::endl;
    } else {
        std::cout << "str1不小于str2" << std::endl;
    }

    // compare() 函数用于比较两个字符串的大小，并返回一个整数，表示比较结果
    // 返回值为0表示相等，小于0表示第一个字符串小于第二个字符串，大于0表示第一个字符串大于第二个字符串
    int result = str1.compare(str2);

    if (result == 0) {
        std::cout << "字符串相等" << std::endl;
    } else if (result < 0) {
        std::cout << "str1小于str2" << std::endl;
    } else {
        std::cout << "str1大于str2" << std::endl;
    }
}

// find() 函数用于查找子串或字符第一次出现的位置，并返回其索引。如果未找到，返回std::string::npos
void testCppStringFind() {
    std::string str = "Hello, World!";
    std::string substr = "Wo";

    size_t found = str.find(substr);  // 查找子串

    // std::string::npos 通常定义为-1，如果未找到子串的索引位置 则返回-1值 表示查找失败
    if (found != std::string::npos) {
        std::cout << "子串 '" << substr << "' 在字符串中的位置：" << found << std::endl;
    } else {
        std::cout << "未找到子串 '" << substr << "'" << std::endl;
    }

    char ch = 'o';
    found = str.find(ch);  // 查找字符

    if (found != std::string::npos) {
        std::cout << "字符 '" << ch << "' 在字符串中的位置：" << found << std::endl;
    } else {
        std::cout << "未找到字符 '" << ch << "'" << std::endl;
    }

}

// rfind() 函数与find()函数类似，但从字符串的末尾开始查找
void testCppStringRFind() {
    std::string str = "Hello, World!";
    std::string substr = "o";

    size_t found = str.rfind(substr);  // 从末尾开始查找子串

    if (found != std::string::npos) {
        std::cout << "子串 '" << substr << "' 在字符串中最后出现的位置：" << found << std::endl;
    } else {
        std::cout << "未找到子串 '" << substr << "'" << std::endl;
    }
}

// find_first_of() 函数用于查找字符串中任意字符第一次出现的位置，并返回其索引
void testCppStringFindFirstOf() {
    std::string str = "Hello, World!";
    std::string characters = "lo";  // 要查找的字符集合

    size_t found = str.find_first_of(characters);  // 查找字符集合中任意字符的位置

    if (found != std::string::npos) {
        std::cout << "字符集合中的字符在字符串中第一次出现的位置：" << found << std::endl;
    } else {
        std::cout << "未找到字符集合中的字符" << std::endl;
    }
}

int main() {
    testC();
    return 0;
}