/*
 * @Author: your name
 * @Date: 2021-11-30 21:29:21
 * @LastEditTime: 2021-11-30 21:51:52
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /CPlus/shiqiyu_cplus/6.1_functions.cpp
 */
#include <iostream>
#include <float.h>

using namespace std;

struct Matrix
{
    /* data */
    int rows;
    int cols;
    float *pData;
};

float matrix_max(struct Matrix mat)
{
    float max = FLT_MIN;
    for (int r = 0; r < mat.rows; r++)
    {
        for (int c = 0; c < mat.cols; c++)
        {
            float val = mat.pData[r * mat.cols + c];
            max = (max > val ? max : val);
        }
    }
};

int main()
{
    Matrix matA = {3, 4};
    matA.pData = new float[matA.rows * matA.cols]{1.f, 2.f, 3.f};

    Matrix matB = {4, 8};
    matB.pData = new float[matB.rows * matB.cols]{10.f, 20.f, 30.f};

    Matrix matC = {4, 2};
    matC.pData = new float[matC.rows * matC.cols]{100.f, 200.f, 300.f};

    // some operations on the matrices
    float maxa = matrix_max(matA);
    float maxb = matrix_max(matB);
    float maxc = matrix_max(matC);

    cout << "max(matA) = " << maxa << endl;
    cout << "max(matB) = " << maxb << endl;
    cout << "max(matC) = " << maxc << endl;

    delete[] matA.pData;
    delete[] matB.pData;
    delete[] matC.pData;

    return 0;
}

// max(matA) = 3
// max(matB) = 30
// max(matC) = 300