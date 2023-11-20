/**
 * @brief 其他数据类型-struct结构体
 * @author cppCodeDream
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


// 定义一个名为Student结构体
struct Student {
    string name;
    int age;
    float score;

};

// 匿名结构体
struct {
    int x;
    int y;
} position;


void testStruct() {

    // 创建结构体对象

    // 默认成员初始化
    Student student1;

    // 聚合初始化
    Student student2 = {
            "caicai", // name
            20, // age
            99.99 // score
    };

    // 值初始化 所有成员都被初始化为默认值
    Student student3 = {};


    // 访问结构体成员
    student1.name = "caicai";   // 访问并设置student1的name成员
    student1.age = 20;       // 访问并设置student1的age成员
    student1.score = 99.88;   // 访问并设置student1的score成员

    cout << "Name: " << student1.name << endl;   // 访问并输出student1的name成员
    cout << "Age: " << student1.age << endl;     // 访问并输出student1的age成员
    cout << "Score: " << student1.score << endl; // 访问并输出student1的score成员


    position.x = 10;  // 设置匿名结构体的成员 x 的值为 10
    position.y = 20;  // 设置匿名结构体的成员 y 的值为 20

    std::cout << "x: " << position.x << std::endl;  // 输出匿名结构体的成员 x 的值
    std::cout << "y: " << position.y << std::endl;  // 输出匿名结构体的成员 y 的值

}

// 结构数组：结构数组是指由结构体类型的元素组成的数组
void testStructArray() {

    const int SIZE = 3;
    Student students[SIZE];

    students[0] = {"cai", 20, 85.5};
    students[1] = {"xiaocai", 19, 92.0};
    students[2] = {"xiaoxiaocai", 21, 78.5};

    for (int i = 0; i < SIZE; ++i) {
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Score: " << students[i].score << endl;
        cout << std::endl;
    }
}


int main() {
    testStruct();
    return 0;
}