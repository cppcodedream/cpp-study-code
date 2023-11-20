/**
 * @brief 其他数据类型-指针
 * @author cppCodeDream
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


void testAddress() {
    int age = 10;
    // age是一个变量，&age就是它的地址
    cout << "age = " << age
         << "\t &age = " << &age << endl;

    double pi = 3.1415926;
    cout << "pi = " << pi
         << "\t &pi = " << &pi << endl;

}


void testPointer() {

    /**
    * 那么如何通过地址再来拿到对应的值呢
    * 使用 * 运算符(和乘法运算符相同)，称为解引用
    */
    int num = 10; // 定义一个整数变量

    double *d_ptr; // 声明一个指向double类型的指针
    char *c_ptr; // 声明一个指向char类型的指针
    int *ptr; // 声明一个指向整数的指针

    ptr = &num;  // 将指针指向变量num的地址
    cout << "num的值: " << num << endl;
    cout << "num的地址: " << &num << endl;
    cout << "指针ptr的值: " << ptr << endl;
    cout << "指针ptr所指向的值: " << *ptr << endl;


    cout << "修改前的num的值: " << num << endl;

    *ptr = 20; // 解引用指针并修改num的值

    cout << "修改后的num的值: " << num << endl;


}

// const指针
void testConstPoint() {

    int value1 = 10;

    // 指针常量：指针常量是指指针所指向的值是一个常量，即不能通过该指针修改所指向的值
    const int *ptr1 = &value1; // const指针指向一个整数常量

    // 无法通过const指针修改所指向的值
    // *ptr = 20; // 无法修改

    // 可以通过const指针读取所指向的值
    int val = *ptr1; // 可以读取



    // 常量指针:常量指针是指指针本身是一个常量，即指针变量的值不能修改，但可以通过该指针修改所指向的值
    int value2 = 10;
    int *const ptr2 = &value2; // 常量指针，指向一个整数变量

    // 无法修改常量指针的值
    // ptr = nullptr; // 无法修改

    // 可以通过常量指针修改所指向的值
    *ptr2 = 20; // 可以修改value的值


    // 常量指针指向常量：指既不能通过指针修改所指向的值，也不能修改指针本身的值。声明常量指针指向常量时
    int value = 10;
    const int *const ptr = &value;

    // 无法修改常量指针的值和所指向的值
    // ptr = nullptr; // 无法修改
    // *ptr = 20;     // 无法修改
}

// 动态内存分配和释放
void testNewPoint() {

    // 通用格式：
    // typeName* pointName = new typeName;
    // 在C语言中，使用malloc()来分配内容，在C++中，使用new运算符


    // new运算符用于在堆上分配内存，并返回分配的内存地址
    int *ptr = new int; // 动态分配一个整数的内存空间

    *ptr = 5; // 使用指针操作动态分配的内存

    cout << "动态分配的整数值: " << *ptr << endl;



    //new[]运算符：用于在堆上分配数组内存，并返回所分配的内容的地址
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr; // 数组名是指向数组首元素的指针
    // 指针arr指向数组内存块中的第一个元素,也就是arr[0]
    cout << "数组元素的值: ";
    for (int i = 0; i < 5; i++) {
        // arrPtr + i:将指针 ptr 移动 i 个元素位置
        cout << *(arrPtr + i) << " "; // 通过指针遍历数组
    }
    cout << endl;



    // 内存有没有可能使用完？有！这时候new就会返回异常，所以需要手动释放内存,以防内存泄漏
    // 在C语言中使用free()，在C++中使用delete

    delete ptr; // 释放动态分配的内存空间(只释放ptr指向的内存，不会删除ptr本身，ptr还可以指向新的内存块)
    // delete[] arr;


    /**
    * 不要使用delete释放不是new分配的内存
    * 不要使用delete释放同一个内存块2次
    * 如果使用new[] 为数组分配内存，应使用delete[]来释放
    * 对于空指针应用delete是安全的
    */

}


int main() {
    testPointer();
    return 0;
}