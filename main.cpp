#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int f;
    double c;
    /*برای افزایش دقت یک صفر جلوی اعداد اضافه کردم*/
    const double F_TO_C=5.0/9.0;
    cout<<"\n Enter the temperature in Fahrenheit:";
    cin>>f;
    c=F_TO_C*(f-32);
    cout<<"\n The temperature in Celsius:"<<c;
    getch();
    return 0;
}
