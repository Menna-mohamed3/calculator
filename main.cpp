#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char op;
    //طلب ادخال الرقم الاول من المستخدم
    cout<<"Enter the first number: ";
    //هنا علشان يستقبل الرقم اللى المستخدم هيدخله
    cin>>num1;
    //نوع العمليه الحسابيه
    cout<<"Enter the operation(+ - * /) ";
    //نستقبل العمليه
    cin>>op;
    //طلب ادخال الرقم الثانى من المستخدم
    cout<<"Enter the second number: ";
    //هنستقبل الرقم الثانى
    cin>>num2;
    switch(op){
case'+':
    //هنا هنجمع رقمين
    cout<<"Result: "<<num1+num2<<endl;
    break;
case'-':
    cout<<"Result: "<<num1-num2<<endl;
    break;
case'*':
    cout<<"Result: "<<num1*num2<<endl;
    break;
case'/':
     if(num2!=0)
        cout<<"Result: "<<num1/num2<<endl;
     else
        cout<<"Error: "<<endl;
     break;
default:
    cout<<"Error: "<<endl;

    }


    return 0;
}
