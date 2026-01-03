// projektivegla.grupi26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

int shuma(int a, int b) {
    return a + b;
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
    int x, y;
    cout << "jep vleren per x,y: ";
    cin >> x, y;
    cout << "Modulo: " << modulo(x, y) << endl;

} 
