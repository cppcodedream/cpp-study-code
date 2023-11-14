/**
 * @file 06_otherDataType_vector.cpp
 * @brief 其他数据类型-vector
 * @author cppCodeDream
 */


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;


void printVector(const vector<int> &vec) {
    for (int i: vec) {
        cout << i << " ";
    }
    cout << endl;
}

/**
 * vector初始化
 */
void testInitVector() {

    // 1. 使用默认构造函数
    vector<int> myVector1;  // 创建一个空的整数Vector
    // 2. 使用初始化列表
    vector<int> myVector2 = {1, 2, 3, 4, 5}; // 创建一个包含初始元素1、2、3、4、5的整数Vector
    printVector(myVector1);


    // 3. 使用拷贝构造函数
    vector<int> anotherVector = {1, 2, 3, 4, 5};
    vector<int> myVector3(anotherVector); // 使用另一个Vector初始化新的Vector

    // 4. 使用填充构造函数
    vector<int> myVector4(5, 10); // 创建一个包含5个初始值为10的整数的Vector
    printVector(myVector1);


    // 5. 使用范围构造函数
    vector<int> myVector(anotherVector.begin(), anotherVector.end());

}

/**
 * vector插入元素
 */
void testInsertItem() {


    // 1. push_back：将元素添加到vector的末尾
    vector<int> numbers;
    cout << "size:" << numbers.size() << endl;
    cout << "capacity:" << numbers.capacity() << endl;

    numbers.push_back(1); // 在数组尾部添加一个元素
    cout << "size:" << numbers.size();
    cout << "\tcapacity:" << numbers.capacity() << endl;

    numbers.push_back(2);
    cout << "size:" << numbers.size();
    cout << "\tcapacity:" << numbers.capacity() << endl;

    numbers.push_back(3);
    cout << "size:" << numbers.size();
    cout << "\tcapacity:" << numbers.capacity() << endl;



    // 2. insert：指定位置插入一个或多个元素
    numbers.insert(numbers.begin() + 2, 10); // 在索引为2的位置插入元素10

    vector<int> newVec = {20, 30, 40};
    numbers.insert(numbers.end(), newVec.begin(), newVec.end()); // 在末尾插入newVec中的元素

    cout << "size:" << numbers.size();
    cout << "\tcapacity:" << numbers.capacity() << endl;

}

/**
 * vector删除元素
 */
void testDeleteItem() {
    // erase()函数
    vector<int> vec = {1, 2, 3, 4, 5};
    auto it = vec.begin() + 2;  // 删除索引为2的元素（值为3）
    vec.erase(it);

    auto first = vec.begin() + 1;  // 删除索引为1到索引为3的元素（值为2、3、4）
    auto last = vec.begin() + 4;
    vec.erase(first, last);


    // pop_back()函数：删除vector中的最后一个元素
    vec.pop_back();

    //需要注意，删除元素可能会导致迭代器失效，因此在删除元素后，需要谨慎使用或更新迭代器

}

/**
 * vector更新元素
 */
void testUpdateItem() {

    // 1. 使用下标
    vector<int> vec = {1, 2, 3, 4, 5};
    vec[2] = 10;  // 将索引为2的元素的值修改为10

    // 2. 使用迭代器
    auto it = vec.begin() + 3;  // 指向索引为3的元素（值为4）
    *it = 10;  // 将索引为3的元素的值修改为10

}

/**
 * vector查询元素
 */
void testSelectItem() {
    // std::find和std::find_if 需要包含<algorithm>头文件来使用
    // 1. std::find() 会遍历指定范围内的元素，直到找到目标元素或遍历完整个范围
    vector<int> vec = {1, 2, 3, 4, 5};
    auto it = std::find(vec.begin(), vec.end(), 3);  // 查找值为3的元素
    if (it != vec.end()) {
        cout << "找到了元素：" << *it << endl;
    } else {
        cout << "未找到元素" << endl;
    }

    // 2. 使用vector提供的算法函数
    // 使用 std::find_if() 查找第一个偶数
    auto evenIt = std::find_if(vec.begin(), vec.end(), [](int num) {
        return num % 2 == 0;
    });
    if (evenIt != vec.end()) {
        cout << "找到了第一个偶数：" << *evenIt << endl;
    } else {
        cout << "未找到偶数" << endl;
    }

}

/**
 * vector其他常用方法
 */
void testOtherMethod() {

    // 判断是否为空
    vector<int> vec;
    if (vec.empty()) {
        cout << "容器为空" << endl;
    } else {
        cout << "容器不为空" << endl;
    }


    // 访问首尾元素
    vec = {1, 2, 3, 4, 5};
    cout << "首元素：" << vec.front() << endl;
    cout << "尾元素：" << vec.back() << endl;

    // 清空容器
    vec.clear();

    // 调整容器大小
    vec = {1, 2, 3};
    vec.resize(5);  // 增加容器的大小为5，多出的元素将使用默认值0进行初始化

}

int main() {
    testInitVector();
    return 0;
}