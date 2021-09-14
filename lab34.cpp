//
//  main.cpp
//  Lab34
//
//  Created by Eunice Sibal on 15/8/21.
//



/*
 Typedef Count int;         mistakes: changes typedef and swapped count and int
 void main()                mistakes: void should be int
 {
 Count C;
 cout<<"Enter the count:";
 cin>>C;
 for (K = 1; K<=C; K++)
 cout<< C "*" K <<endl;     mistakes: cout should be paired with << to show output
                            mistakes: should return 0/ return the main function so that outputs can be executed.
 */

#include <iostream>
#include <string.h>
using namespace std;
//typedef int Count;
//int K;

//string Fullname;

int main()
{
    int sum;
    //even numbers
    sum = 0;
    for (int i=0; i<22; i+=2) { //1+2+3+4+5+6 all the way to +22
        sum = sum + i;
        cout << sum << endl;
    }
    cout << "sum of 15 integers is: " << sum << endl;
    return 0;
}

    /*
     //question 14
     float num1, num2;
     char op;
     
     cout << "Enter two numbers: " << endl;
     cin >> num1 >> num2;
     cout << "Enter two operands and operator (+  -  *  /)" << endl;
     cin >> op;
     switch(op) {
         case '+':
                 cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
                 break;
         case '-':
                 cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
                 break;
         case '*':
             cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
                 break;
         case '/':
                 cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
                 break;
         default:
                 cout << "Unacceptable choice" << endl;
             return main();
     }

     
     num = 0;
     for (int i=1; i<50; i++) { //1+2+3+4+5+6 all the way to +50
         num = num + i;
         cout << num << endl;
     }
     cout << "sum of 50 integers is: ";
     return 0;
     
     question 13
     //odd numbers
     int sum;
     for (int i=1; i<16; i+=2) { //1+2+3+4+5+6 all the way to +22
         sum = sum + i;
         cout << sum << endl;
     }
     cout << "sum of odd integers is: " << sum << endl;
     return 0;
     
     question 11
     int num = 10;
     while (num >= 1) {
         cout << num << " ";
         num--;
     }
     
     question 10
     int favorite;
     cout << "Enter your favorite number: ";
     cin >> favorite;
     
     if (favorite == 13) {
         cout << "That my favorite number too!" << endl;
         cout << "That's amazing!" << endl;
         cout << "Great minds think alike!" << endl;
         
     } else {
         cout << "That not my favorite number!" << endl;
         cout << "That's not amazing!" << endl;
         cout << "We don't think alike!" << endl;
     }
     return 0;
     
     
     Question 9
     int temperature;
     cout << "Enter a temperature: ";
     cin >> temperature;
     if (temperature <50) {
         cout << "It's cold!" << endl;
     } else if (temperature > 50) {
       // block of code to be executed if the condition1 is false and condition2 is true
         cout << "It's hot" << endl;
     } else {
         cout << "Maybe it's raining?" << endl;
     }
     
     //question 8
     int num;
     cin >> num;
     
     if (num > 10) {
         num -= 10;
         cout << num << endl;
     } else {
         num += 10;
         cout << num << endl;
     }
     return 0;
     
     
     question 7
     cout << "enter a number between 1 - 100: " << endl;
     cin >> num;
     
     if (num >= 100&&num<=100) {
         cout << "Amazing! That's my favorite number too! No really! " << num << " is my favorite number!" << endl;
     } else {
         cout << "that is not an acceptable number." << endl;
     }
     return 0;
     
     Question 6
     int age;
     int num1; //declare number
     num1 = 5; //ini var
     
     num1 += 10;
     
     int num2; //declar number 2
     num2 = 10; //init var 2
     
     num2 = num1; //assigned number 2 as number 1
     
     
     cout << "output is: " << num2 << endl;
     return 0;
     
     
     
     
    cout<<"enter your age: ";
    cin>>age;
    if (age >= 16)
    {
        cout<< "you can drive \n";
    }
    else;
    {
        
    }
    return 0;
     
    cout<<"what is your fullname?: ";
    getline(cin, Fullname, '\n');
    cout<<"Your name is: " << Fullname<< endl;
    cout<<"That's a sick ass name" << endl;
    return 0;
     
}
     
    
    Count C;                        //Count is a function with is rep. by C
    cout<<"Enter the count: ";
    cin>>C;                         // enter C amount
    for (K = 1; K <= C; K++)  // K equals 1 and K should be less or equal to C, K++ is an increment
                                    // If K  is more than C, then it would not work bc it would be greater than C. And would not increment. If K=C then it would loop again and again.
        cout<< C * K <<endl;
    return 0;
     */
//}

