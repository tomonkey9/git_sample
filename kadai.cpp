#include<iostream>
#include "keisan.h"
#include"keisan.cpp"

using namespace std;

int main(){
    Keisan k;
    double a;
    double b;

    cout<<"値を入力:"<<endl;
    cin >> a;
    k.set1(a);
    cout<<"値を入力"<<endl;
    cin >> b;
    k.set2(b);
    cout << "加法" << k.add() << endl;
    cout << "減法" << k.sub() << endl;
    cout << "乗法" << k.mul() << endl;
    cout << "除法" << k.div() << endl;
    
    return 0;
}