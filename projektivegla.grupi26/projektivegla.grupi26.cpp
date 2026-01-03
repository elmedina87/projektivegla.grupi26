// projektivegla.grupi26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

int shuma(int a, int b) {
    return a + b;
}
int power(int base,int exp){
    return power(base,exp);
}
int modulo(int a ,int b){
return a % b ;

}


int main()
{
    int x, y;
    cout << "jep vleren per x,y: ";
    cin >> x, y;    
    cout << "Shuma: " << shuma(x, y) << endl;
    cout << "zbritja: " << zbritja(x, y) << endl;

    
} 
int zbritja(int a, int b) {
    return a - b;
}
