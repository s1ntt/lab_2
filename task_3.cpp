#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
   // кодіровка для програми
   SetConsoleCP(CP_UTF8);
   SetConsoleOutputCP(CP_UTF8);
   int N;
   cout <<"Введіть для точки M координату по X";
   // об'являєм змінну x
   float x;
   // sin чекаємо введення даних
   cin>> x;
   cout <<"Введіть для точки M координату по Y";
   // об'являєм змінну y
   float y;
   // sin чекаємо введення даних
   cin>> y;
   float y_out;
   y_out = 1/x;
   if (y > 0 && x < 0 || y < 0 && x > 0){
    N = 3;
   } else if (y > 0 && y < 1 && x > 0 || y < 0 && y > -1 && x < 0) {
    if (y_out <= y){
        N = 2;
    } else{
        N = 1;
    }
   } else{
        N = 1;
    }
   cout<<"\t Результат:";
   cout<<"Точка M("<< x << ";" << y <<") належать області N = " << N ;
   cout<<"\t Область Y = " << y_out;
   cout<<'\n' + "Для закінчення программи натисніть Enter.";
}