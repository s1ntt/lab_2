#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
   // кодіровка для програми
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
   // виводить текст
   cout <<"Введіть вхідні дані для b";
   // об'являєм змінну б
   float b;
   // sin чекаємо введення даних
   cin>> b;
   // обявляем змінні y та x згідно умови задачі
   float x = pow(2, 1/4), y = pow(3, 1/3), c;
   // записуєм рівняння обрахунку даних
   c = (x / b * pow (y,3) - 1 / 4 * pow (y,2))/ (pow (x,2) - 2 * x * y + 2 * pow (y,2)) + 1 / (4 * pow (y,2) * (pow (x,2) - 2 * pow (y,2)));
   // виводим отриманні дані змінної c 
   cout << "Значення виразу дорівнює " << c << endl;
}