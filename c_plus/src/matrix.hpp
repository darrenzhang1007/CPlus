#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <initializer_list>
#include <iostream>

/* 原则：

    2. 头文件内不允许写 `using namespace std;`
*/

/* 习惯
    1.成员变量尾部添加下划线 `_` ;
    2. 传值的时候，非基础类型，一般会传递常引用，使用效率更高，避免拷贝
    3. 对于空，在C语言中，大部分时候指malloc分配出来的内存没有初始化的情况
        - 此时malloc分配内存内部的值其实是随机的
        - 此时new分配的内存的值也是随机的
        - 但是，在C++中容器，比如stl对象中的vector、list等，他们分配的空间，如果不进行初始化，则内部值为0
*/

/*
    1. 只能表达二维的矩阵形式，即使是向量，也会用matrix表示
        只表达float类型的矩阵，不表达其他形式
    2. 矩阵的乘法，通用矩阵的乘法形式
    3. 要能够求解逆矩阵
    4. 可以通过指定行 列进行矩阵的创建
    5. 可以允许使用{1, 2, 3} 进行数据填充的方式创建
    6. 能够与标量进行常规的加减法
*/
class Matrix
{
public:
    Matrix() = default;
    Matrix(int rows, int cols, const std::initializer_list<float> &data={})
    {
        rows_ = rows; cols_ = cols;
        data_ = data; // 隐式转换，其实是执行了vector的赋值操作

        // 1. data的元素为空，说明是不指定数据情况下创建
        // 2. data元素不空，说明指定数据情况下创建
            // 1. 元素数量等于 rows × cols
            // 2. 元素数量小于 rows × cols
        if(data_.empty())
        {
            // resize 表示分配rows × cols 个元素，再vector中
            // 此时没有对vector进行初始化，但内部的值全部为0,这是vector保证的
            data_.resize(rows_, cols_);
        }
        else{
            if (data_.size() != rows*cols){
                printf("Invalid construct.\n");
            }
        }
    }

private:
    int rows_ = 0; // 下划线变量表示成员变量
    int cols_ = 0;

    std::vector<float> data_;
};

#endif // MATRIX_HPP