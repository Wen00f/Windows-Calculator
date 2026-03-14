#include<iostream>
#include<cstdlib>  
#include<Windows.h>
double addition(double a,double b)//加
{
    return a + b;
}
double subtraction(double a,double b)//减
{
    return a - b;
}
double multiplication(double a,double b)//乘
{
    return a * b;
}
double division(double a,double b)//除
{
    if (std::abs(b) < 1e-9)
    {
        std::cout <<"0不可以作为除数" <<std::endl;
        return 0;
    }
    else
    {
        return a / b;
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);  // 输出编码设为 UTF-8
    SetConsoleCP(CP_UTF8);        // 输入编码设为 UTF-8
    std::cout << "这是一个计算器" <<std::endl;
    std::cout << "合理运算符+ - * /它们分别负责加减乘除操作" <<std::endl;
    double a = 0;//参数1
    double b = 0;//参数2
    char c;//控制符
    double d = 0;//输出
    std::cout <<"请输入第一个数字" << std::endl;
    std::cin >> a;
    std::cout <<"请输入第二个数字" << std::endl;
    std::cin >> b;
    std::cout << "请输入运算符" <<std::endl;
    std::cin >> c;
    switch (c)//核心判断
    {
    case '+':
        d = addition(a,b);
        break;
    case '-':
        d = subtraction(a,b);
        break;
    case '*':
        d = multiplication(a,b);
        break;
    case '/':
        d = division(a,b);
        break; 
    default:
        std::cout <<"操作不合法" <<std::endl;
        return 1;
    }
    std::cout <<"计算得：" << d << std::endl;
    return 0;
}