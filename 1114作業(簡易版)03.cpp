#include <iostream>
using namespace std;
float money;
int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int total;

int main() {
cout << "請輸入整數金額(5000元紙鈔並不算在內):";
cin >> money;
if (money / 1000 > 1){
    num1 = money / 1000 ;
    num2 = (money - num1 * 1000) / 500;
    num3 = (money - num1 * 1000 - num2 * 500) / 100;
    num4 = (money - num1 * 1000 - num2 * 500 - num3 * 100) / 50;
    num5 = (money - num1 * 1000 - num2 * 500 - num3 * 100 - num4 * 50) / 10;
    num6 = (money - num1 * 1000 - num2 * 500 - num3 * 100 - num4 * 50 - num5 * 10) / 5;
    num7 = (money - num1 * 1000 - num2 * 500 - num3 * 100 - num4 * 50 - num5 * 10 - num6 * 5) / 1; 
}else if (money / 500 > 1){
    num2 = money / 500 ;
    num3 = (money - num2 * 500) / 100;
    num4 = (money - num2 * 500 - num3 * 100) / 50;
    num5 = (money - num2 * 500 - num3 * 100 - num4 * 50) / 10;
    num6 = (money - num2 * 500 - num3 * 100 - num4 * 50 - num5 * 10) / 5;
    num7 = (money - num2 * 500 - num3 * 100 - num4 * 50 - num5 * 10 - num6 * 5) / 1;
}else if (money / 100 > 1){
    num3 = money / 100 ;
    num4 = (money - num3 * 100) / 50;
    num5 = (money - num3 * 100 - num4 * 50) / 10;
    num6 = (money - num3 * 100 - num4 * 50 - num5 * 10) / 5;
    num7 = (money - num3 * 100 - num4 * 50 - num5 * 10 - num6 * 5) / 1;
}else if (money / 50 > 1){
    num4 = money / 50;
    num5 = (money - num4 * 50) / 10;
    num6 = (money - num4 * 50 - num5 * 10) / 5;
    num7 = (money - num4 * 50 - num5 * 10 - num6 * 5) / 1;
}else if(money / 10 > 1){
    num5 = money / 10 ;
    num6 = (money - num5 * 10) / 5;
    num7 = (money - num5 * 10 - num6 * 5) / 1;
}else if(money / 5 > 1){
    num6 = money / 5 ;
    num7 = (money - num6 * 5) / 1;
}
total =num1 + num2 + num3 + num4 + num5 + num6 + num7;
cout << total;
}
//真的不知道怎麼用Do-While做，也不會做小數點的算數，所以只能做成像上方這樣了
//沒辦法完成要求，在這裡先向老師致歉
