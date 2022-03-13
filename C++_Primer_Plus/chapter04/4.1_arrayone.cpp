/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-13 16:07:52
 * @LastEditTime : 2022-03-13 16:07:52
 * @LastEditors  : DarrenZhang
 * @Description  : array in c++
 * @FilePath     : /CPlus/C++_Primer_Plus/chapter04/4.1_arrayone.cpp
 * @RunCode      : g++ 4.1_arrayone.cpp & ./a.out
 */
#include <iostream>

int main()
{
    using namespace std;

    int yams[3]; // create array with three elements
    yams[0] = 7; // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create, initialize array

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;

    cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cents per yam." << endl;

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents." << endl;

    cout << "Size of yams array = " << sizeof(yams) << " bytes." << endl;     // 计算数组的内存占用
    cout << "Size of one element = " << sizeof(yams[0]) << " bytes." << endl; // 计算数组中单个元素的内存占用

    // sizeof 对于变量可以使用括号或者不使用括号，但是对于 数据类型 来说，必须加括号
    cout << "Size of int type = " << sizeof(int) << " bytes." << endl;
    cout << "Size of short type = " << sizeof(short) << " bytes." << endl;
    cout << "Size of float type = " << sizeof(float) << " bytes." << endl;
    cout << "Size of double type = " << sizeof(double) << " bytes." << endl;

    // cout << sizeof int << endl;  // error

    // ============ C++中数组初始化方式 ============ //
    int cards[4] = {3, 6, 8, 10}; // ok
    int hand[4];                  // ok，这样初始化之后，如果要为元素赋值，只能按照元素位置（索引）赋值
    // hand[4] = {5, 6, 7, 8};    // not allowed
    // hand = cards;              // not allowed
    // 数组名表示数组在内存中的地址，将地址赋值给地址，是说不通的
    float hotelTips[5] = {5.0, 2.5}; // 如果初始化时，提供的值少于数组的元素数目，编译器会将其他元素设置为0
    cout << "hotelTips 的第一个元素为: " << hotelTips[0] << endl;
    cout << "hotelTips 的第四个元素为: " << hotelTips[3] << endl;

    long totals[500] = {0}; // 将数组中所有元素全部初始化为0,只需显式地将第一个元素初始化为0
    long totals_[500] = {1};
    cout << "totals 的第一个元素为" << totals[0] << ", totals_ 的第一个元素为" << totals_[0] << endl;
    cout << "totals 的第四个元素为" << totals[3] << ", totals_ 的第四个元素为" << totals_[3] << endl;

    // ============ 计算数组中元素个数 ============ //
    short things[] = {1, 5, 3, 8}; // 如果初始化没有指定元素个数，编译器会计算元素个数
    int num_elements = sizeof(things) / sizeof(short);
    cout << "Number of things' element = " << num_elements << endl;

    // =========== C++ 11 中数组初始化方式 =========== //
    double earnings[4]{1.2e4, 1.6e4, 1.1e4, 1.7e4}; // ok with C++11
    unsigned int counts[10]{};                      // all elements set to 0
    float balances[100]{};                          // all elements set to 0

    // 浮点数转换为整型是缩窄操作，编译不能通过 not allowed
    // long plifs[] = {25, 92, 3.0};
    // 1122011超出了char变量的取值范围(假设char变量的长度为8位，则取值范围为[0, 255])，not allowed
    // char slifs[4] {'h', 'i', 1122011, '\0'};
    // 112在char变量的取值范围内，char类型也是一种整型类型，所以编译可以通过
    char tlifs[4]{'h', 'i', 112, '\0'}; // allowed

    return 0;
}