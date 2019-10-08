#ifndef _KEISAN_H_
#define _KEISAN_H_

class Keisan{
    public:
    void set1(double a);
    void set2(double b);
    double add();
    double sub();
    double mul();
    double div();
    private:
    double num1;
    double num2;
};

#endif