/*
 * @Author: your name
 * @Date: 2021-11-19 00:30:13
 * @LastEditTime: 2021-11-19 00:30:13
 * @LastEditors: Please set LastEditors
 * @Description: union 
 * @FilePath: /CPlus/shiqiyu_cplus/4.3_union.cpp
 */
#include <iostream>
using namespace std;

union ipv4address
{
    std::uint32_t address32;
    std::uint8_t address8[4];
};

int main()
{
    union ipv4address ip;

    cout << "sizeof(ip) = " << sizeof(ip) << endl;

    ip.address8[3] = 127;
    ip.address8[2] = 0;
    ip.address8[1] = 0;
    ip.address8[0] = 1;

    cout << "The address is ";
    cout << +ip.address8[3] << ".";
    cout << +ip.address8[2] << ".";
    cout << +ip.address8[1] << ".";
    cout << +ip.address8[0] << endl;

    cout << std::hex;
    cout << "in hex " << ip.address32 << endl;

    return 0;
}
