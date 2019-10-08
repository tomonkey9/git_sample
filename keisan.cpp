# include "keisan.h"

void Keisan::set1(double a)
{
    num1=a;
}

void Keisan::set2(double b)
{
    num2=b;
}
double Keisan::add()
{
    return num1 + num2;
}

double Keisan::sub()
{
    return num1 - num2;
}

double Keisan::mul()
{
    return num1 * num2;
}

double Keisan::div()
{
    return num1 / num2;
}