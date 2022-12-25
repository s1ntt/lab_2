#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
   // кодіровка для програми
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
   Start:
   // виводить текст
   cout <<"Введіть координату x";
   // об'являєм змінну x
   float x;
   // sin чекаємо введення даних
   cin>> x;
   cout <<"Введіть координату y";
   // об'являєм змінну y
   float y;
   // sin чекаємо введення даних
   cin>> y;
   cout <<"Введіть координату z";
   // об'являєм змінну z
   float z;
   // sin чекаємо введення даних
   cin>> z;
   // обявляем змінні y та x згідно умови задачі
   float f;
   // записуєм рівняння обрахунку даних
   float d;
   float y_2 = pow(y,2); 
   float x_3 = pow(x,3);
   d = max(x_3,max(y_2,x*y))+x; 
   float n;
   n = pow(min(x,y*z),2)-y;
   if (n > 0)
   {f = d/n;}
   else
        {std::cout <<"Ділення на 0 заборонено\n";
        goto Start;}
   // виводим отриманні дані змінної c 
   cout << "Значення виразу дорівнює " << f << endl;
}