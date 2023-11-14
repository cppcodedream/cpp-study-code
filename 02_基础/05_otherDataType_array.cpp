/**
 * @file 05_otherDataType_array.cpp
 * @brief 其他数据类型-数组
 * @author cppCodeDream
 */


#include <iostream>

using std::cout;
using std::endl;


void testArray() {

    // 声明数组的格式： 数组元素类型 数组名[数组大小]   typeName arrayName[arraySize]
    // 定义数组
    int numbers[3];

    // 初始化数组
    numbers[0] = 1; // 0 代表数据元素的下标，从0开始
    numbers[1] = 2;
    numbers[2] = 3;


    // 根据索引访问数组元素  格式：数组名[索引]
    cout << "numbers[0]: " << numbers[0] << endl;
    cout << "numbers[2]: " << numbers[2] << endl;

    // 修改数组元素
    numbers[1] = 10;
    cout << "Modified numbers[1]: " << numbers[1] << endl;

    // 获取数组长度
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Array size: " << size << endl;

    // 遍历数组
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
}

void initArray() {

    // 默认初始化，元素值未定义
    int numbers1[3];

    // 列表初始化
    int numbers2[5] = {1, 2, 3, 4, 5};

    // 列表初始化，其余元素初始化为0
    int numbers3[5] = {1, 2};

    // 自动推断数组大小为3
    int numbers4[] = {1, 2, 3};

    // 动态分配数组并初始化
    int *dynamicArray = new int[4]{1, 2, 3, 4};
    // 注意，动态分配的数组在使用后应使用`delete[]`运算符进行释放
    delete[] dynamicArray;

    // 禁止缩窄操作
    // 在C++11之前，如果发生了缩窄操作，编译器会默默地截断值并初始化，可能导致数据丢失
    // 在C++11之后，如果发生了缩窄操作，编译器会报错

    // int arr[3] = {1, 2, 3.14};

}


int main() {
    testArray();
    initArray();
    return 0;
}