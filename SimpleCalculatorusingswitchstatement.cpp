/*  C++ Program to Make a Simple Calculator to 
Add, Subtract, Multiply or Divide Using switch...case */

#include <iostream>
using namespace std ;
int main ()
{
    char op ;
    float num1 ,num2 ;

    cout << " select your operator system ( + , - , * , / )   =   " ;
    cin >> op ;


    cout << " Enter any two number : " ;
    cin >> num1 >> num2 ;

    switch (op) {
    case '+' :
    cout <<num1 <<" + " <<num2 <<" = " <<num1 + num2 <<endl ;
    break ;

    case '-' :
    cout <<num1 <<" - " <<num2 <<" = " <<num1 - num2 <<endl ;
    break ;

    case '*' :
    cout <<num1 <<" * " <<num2 <<" = " <<num1 * num2 <<endl ;
    break ;

    case '/' :
    cout <<num1 <<" / " <<num2 <<" = " <<num1 / num2 <<endl ;
    break ;

    default :
    cout << " Error !!!! operator is not found ! " ;







    }

    return 0 ;


}