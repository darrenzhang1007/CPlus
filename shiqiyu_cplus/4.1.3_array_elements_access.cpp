/*
 * @Author: DarrenZhang
 * @Date: 2021-11-18 23:27:10
 * @LastEditTime: 2021-11-18 23:34:07
 * @LastEditors: Please set LastEditors
 * @Description: Array Elements accessing, and check bound
 * @FilePath: /CPlus/shiqiyu_cplus/4.1.3_array_elements_access.cpp
 */
#include <iostream>
using namespace std;
int main()
{
    int array1[4] = {9, 8, 7, 6};
    int array2[4];
    // array2 = array1; //error!
    array2[0] = array1[0]; //okay
    array2[1] = array1[1]; //okay
    array2[2] = array1[2]; //okay
    array2[3] = array1[3]; //okay

    int num_array[5];
    cout << "num_array[-1] is " << num_array[-1] << endl;

    for (int idx = -1; idx <= 5; idx++) //out of bounds
        num_array[idx] = idx * idx;

    for (int idx = -1; idx <= 5; idx++) //out of bounds
        cout << "num_array[" << idx << "] = " << num_array[idx] << endl;

    // 多维数组
    int mat[2][3] = {{11, 12, 13}, {14, 15, 16}};
    int rows = 3;
    int cols = 3;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
            cout << mat[r][c] << ",";
        cout << endl;
    }
    return 0;
}

// num_array[-1] is 6
// num_array[-1] = 1
// num_array[0] = 0
// num_array[1] = 1
// num_array[2] = 4
// num_array[3] = 9
// num_array[4] = 16
// num_array[5] = 25
// 11,12,13,
// 14,15,16,
// 662474496,1055320270,1539333056,
// ● rows为2，cols为3，否则就会数组越界

// void init_2d_array(float mat[][], //error
//                    size_t rows, size_t cols)
// {
//     pass
// }
// 必须要指定列数，否则编译器不知道一个二维数组的第二行从什么未知开始
void init_2d_array(float mat[][3], size_t rows, size_t cols)
{
    return;
}
