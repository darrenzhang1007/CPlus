/*
 * @Author: your name
 * @Date: 2021-11-30 22:04:56
 * @LastEditTime: 2021-11-30 22:04:57
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /CPlus/shiqiyu_cplus/6.3_param-reference.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int &num_ref = num;
    cout << "num = " << num << endl;

    num_ref = 10;
    cout << "num = " << num << endl;

    return 0;
}