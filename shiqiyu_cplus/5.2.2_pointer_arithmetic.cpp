/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 14:55:59
 * @LastEditTime: 2021-11-21 15:27:51
 * @LastEditors: Please set LastEditors
 * @Description: 指针的算数操作
 * @FilePath: /CPlus/shiqiyu_cplus/5.2.1_pointer_arithmetic.cpp
 */
#include <iostream>
using namespace std;

#define PRINT_ARRAY(array, n)           \
    for (int idx = 0; idx < (n); idx++) \
        cout << "array[" << idx << "] = " << (array)[idx] << endl;

int main()
{
    int numbers[4] = {0, 1, 2, 3};
    PRINT_ARRAY(numbers, 4)
    
    int *p = numbers + 1; // point to the element with value 1

    cout << "numbers = " << numbers << endl;
    cout << "numbers[1]'s address is " << &numbers[1] << endl;
    cout << "p = " << p << endl;
    p++;                  // point to the element with value 2
    cout << "p = " << p << endl;
    cout << "p0's address is " << &p[0] << endl;
    cout << "p0 = " << p[0] << endl;

    *p = 20;       //change 2 to 20
    *(p - 1) = 10; //change 1 to 10
    p[1] = 30;     //change 3 to 30 ？？？

    PRINT_ARRAY(numbers, 4)

    return 0;
}

// array[0] = 0
// array[1] = 1
// array[2] = 2
// array[3] = 3
// numbers = 0x7ffe5650bf90
// numbers[1]'s address is 0x7ffe5650bf94
// p = 0x7ffe5650bf94
// p = 0x7ffe5650bf98
// p0's address is 0x7ffe5650bf98
// p0 = 2
// array[0] = 0
// array[1] = 10
// array[2] = 20
// array[3] = 30