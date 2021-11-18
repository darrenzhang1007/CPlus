/*
 * @Author: DarrenZhang
 * @Date: 2021-11-18 23:20:16
 * @LastEditTime: 2021-11-18 23:25:39
 * @LastEditors: Please set LastEditors
 * @Description: variable-length arrays
 * @FilePath: /CPlus/shiqiyu_cplus/variable-array.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int num_array1[5] = {0, 1}; // fixed length array, initialized to {0,1,0,0,0}
    cout << "sizeof(num_array1) = " << sizeof(num_array1) << endl;

    int len = 0;
    while (len < 10)
    {
        int num_array2[len]; //variable-length array
        cout << "len = " << len;
        cout << ", sizeof(num_array2)) = " << sizeof(num_array2) << endl;
        len++;
    }

    int num_array3[] = {1, 2, 3, 4}; // the type of num_array is "array of 4 int"
    cout << "sizeof(num_array3)) = " << sizeof(num_array3) << endl;

    return 0;
}

// sizeof(num_array1) = 20
// len = 0, sizeof(num_array2)) = 0
// len = 1, sizeof(num_array2)) = 4
// len = 2, sizeof(num_array2)) = 8
// len = 3, sizeof(num_array2)) = 12
// len = 4, sizeof(num_array2)) = 16
// len = 5, sizeof(num_array2)) = 20
// len = 6, sizeof(num_array2)) = 24
// len = 7, sizeof(num_array2)) = 28
// len = 8, sizeof(num_array2)) = 32
// len = 9, sizeof(num_array2)) = 36
// sizeof(num_array3)) = 16