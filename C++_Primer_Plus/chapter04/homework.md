## 课后习题

### ① 为什么 C++ 有多种整型？

int, short, long, long long, char(特殊的整型)

unsigned int, unsigned short, unsigned long, unsigned long long, unsigned char

根据数据运算的需要，选择何时的数据类型和应用进行匹配。

1. 全球人类总数→ 肯定只有整数，且short类型满足不了
2. 银行利息 -> 肯定得用浮点类型

### ② 声明与下描述相符的变量

1. short整数，值为80

```c++
short a = 80;
```

2. unsigned int整数，值为42110

```c++
unsigned int b = 42110;
```

3. 值为3000000000的整数

```c++
unsigned int c = 3000000000;
long c = 3000000000;
long long c = 3000000000;
```

### ③ C++提供了什么措施来防止超出整型的范围？

C++ 语言中没有提供解决此问题的方法，需要程序员自主预估数据大小并选择合适的数据类型。 每种数据类型的宽度，C++并没做做规定，具体的值由开发平台和编译器来决定。

### ④ 33L与33之间有什么区别？

C++默认整数敞亮在不超出int类型范围的应用情况下，默认优先使用int类型； 33：int 类型 33L：以long类型来存储整数常量

### ⑤ 下面两条C++语句是否等价？

```c++
char grade = 65;
char grade = 'A';
```

在基于ASCII码的平台下，两者是等价的。

```c++
char grade = 65;
```

先将65存储为int类型，然后再类型转换，将int类型转换为char存储来grade。

### ⑥ 如何使用C++来找出编码88表示的字符？指出至少两种方法。

```c++
char ch = 88;
cout << ch << endl;

cout << (char) 88 << endl;
cout << char(88) << endl;
```

### ⑦ 将long值赋给float变量会导致输入误差，将long值赋值给double变量呢？将long long 值赋值给double变量呢？

1. double 是52位， long是63位，也同样会导致输入误差
2. double 是52位， long是63位，也同样会导致输入误差

不同的平台和编译器对应的long和long long 类型的不小是不同的， 如果long长度为4字节，则存放在double类型中不会出现舍入误差， 如果long long类型为8字节，则存放在double类型中会出现舍入误差。

### ⑧ 下列C++表达式结果分别是多少

```c++
8 * 9 + 2    // 74
6 * 3 / 4    // 4
3 / 4 * 6    // 0
6.0 * 3 / 4  // 4.5
15 % 4       // 3
```

### ⑨ 假设x1和x2是两个double变量，您要将他们作为整数相加，再将结果赋给一个整型变量。请编写一条完成这项任务的C++语句。如果要将他们作为double值相加并转换为int呢？

```c++
double x1;
double x2;

int sum = int(x1) + int(x2);
//int sum = (int)x1 + (int)x2;

int sum = int(x1 + x2);
//int sum = (int) (x1 + x2);
```

### ⑩ 下面每条语句声明的变量都是什么类型？

```c++
auto cars = 15;             // int
auto iou = 150.37f;         // float
auto level = 'B';           // char
auto crat = U'/U00002155';  // char32_t
auto fract = 8.25f/2.5;     // double
```

精度提升，在不同操作数进行运算的时候，将二者之间中的精度低的操作数的精度提高到和精度高的操作数一样的精度。