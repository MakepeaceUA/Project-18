#include <iostream>
#include <ctime>
using namespace std;



// Задание 1
//void Calculate(int Number, int Degree) 
//{
//  int res = 1;
//  for (int i = 0;i < Degree;i++) 
//  {
//    res *= Number;
//  }
//  cout << res;
//}

//int main()
//{   
//    setlocale(0,"RUS");
//    int num;
//    int deg;
   
//    cout << "Введите число,которое вы хотите возвести в степень:\n";
//    cin >> num;
//    cout << "Введите степень:\n";
//    cin >> deg;
//    Calculate(num, deg);
//}





// Задание 2
//void Calculate(int F_Number, int S_Number) 
//{
//  int sum = 0;
//  for (int i = F_Number + 1;i < S_Number;i++) 
//  {
//    sum += i;
//  }
//  cout << "Сумма чисел указанного диапазона:" << sum;
//}

//int main()
//{   
//    setlocale(0,"RUS");
//    int num1;
//    int num2;
   
//    cout << "Введите первое число:\n";
//    cin >> num1;
//    cout << "Введите второе число:\n";
//    cin >> num2;
//    Calculate(num1, num2);
//}





// Задание № 3
//void Calculate(int Number)
//{
//    int sum = 0;
//    for (int i = 1; i < Number; i++)
//    {
//        if (Number % i == 0) 
//        {
//            sum += i;
//        }
//        else 
//        {
//            continue;
//        }
            
//    }
//    cout << sum << "\n";
//    if (sum == Number) 
//    {
//        cout << "Число совершенно.";
//    }
//    else
//    {
//        cout << "Число несовершенно.";
//    }
//}

//int main()
//{
//    setlocale(0, "RUS");
//    int num;

//    cout << "Введите число:\n";
//    cin >> num;
//    Calculate(num);
//}







// Задание № 5
//void Calculate(int Number) 
//{
//    int hundred_thousands = Number / 10000 % 1000 / 10;
//    int ten_thousands = Number / 1000 % 100 / 10;
//    int thousands =  Number / 1000 % 10;
//    int hundreds = Number % 1000 / 100;
//    int dozens = Number % 100 / 10;
//    int units = Number % 10;

    
//    int sum_first = hundred_thousands + ten_thousands + thousands;
//    int sum_second = hundreds + dozens + units;
        
//    if (sum_first == sum_second)
//      {
//        cout << "Число счастливое";
//      }
//    else 
//      {
//        cout << "Число не счастливое!";
//      }
//}

// Задание №2
//void Func(int list[],int S) 
//{
//  double sum = 0;
//  for (int i = 0;i <= S;i++) 
//  {
//    sum += list[i];
//  }
//  cout << "Сумма элементов списка: " << sum << "\n";
//  cout << "Среднее арифметическое элементов списка: " << sum / S;
//}

//int main()
//{
//  setlocale(0, "RUS");

//  const int size = 10;
//  int arr[] = {1,2,3,4,5,6,7,8,9,10};
//  Func(arr,size);
//}







const int ListSize = 5;

void Func(int list[][ListSize], int S) 
{
    for (int i = 0; i <= S; i++) 
    {
        for (int j = 0; j <= S; j++) 
        {
           list[i][j] = rand() % 100;
        }
    }
}

void printFunc(int list[][ListSize], int S) 
{
    cout << "Двумерный массив типа int: \n";
    for (int i = 0; i < S; i++) 
    {
        for (int j = 0; j < S; j++) 
        {
            cout << list[i][j] << ' ';
        }
        cout << "\n";
    }
}

void MinMax(int list[][ListSize], int size, int &Min, int &Max) 
{
    Min = list[0][0];
    Max = list[0][0];
    for (int i = 0; i < size; ++i) 
    {
        if (list[i][i] < Min) 
        {
            Min = list[i][i];
        }
        if (list[i][i] > Max) 
        {
            Max = list[i][i];
        }
    }
    cout << "Минимальный и максимальный элементы на главной диагонали двумерного массива типа int:\n" << Min << " " << Max << "\n\n";
}


void Func(double list[][ListSize], int S) 
{
    for (int i = 0; i <= S; i++) 
    {
        for (int j = 0; j <= S; j++) 
        {
           list[i][j] = rand() % 100;
        }
    }
}

void printFunc(double list[][ListSize], int S) 
{
    cout << "Двумерный массив типа double: \n";
    for (int i = 0; i < S; i++) 
    {
        for (int j = 0; j < S; j++) 
        {
            cout << list[i][j] << ' ';
        }
        cout << "\n";
    }
}


void MinMax(double list[][ListSize], int size, double &Min, double &Max) 
{
    Min = list[0][0];
    Max = list[0][0];
    for (int i = 0; i < size; ++i) 
    {
        if (list[i][i] < Min) 
        {
            Min = list[i][i];
        }
        if (list[i][i] > Max) 
        {
            Max = list[i][i];
        }
    }
  cout << "Минимальный и максимальный элементы на главной диагонали двумерного массива типа double:\n" << Min << " " << Max << "\n\n";
}

void Func(char list[][ListSize], int S) 
{
    for (int i = 0; i <= S; i++) 
    {
        for (int j = 0; j <= S; j++) 
        {
           cout << "Введите символ элемента двумерного массива типа 'char' [" << i << "][" << j << "]: ";
           cin >> list[i][j];
           cout << "\n";
        }
    }
}

void printFunc(char list[][ListSize], int S) 
{
    cout << "Двумерный массив типа char: \n";
    for (int i = 0; i < S; i++) 
    {
        for (int j = 0; j < S; j++) 
        {
            cout << list[i][j] << ' ';
        }
        cout << "\n";
    }
}

int main() {
    srand(time(0));
    setlocale(0, "RUS");
    
    int In[ListSize][ListSize];
    double Doub[ListSize][ListSize];
    char Ch[ListSize][ListSize];

    int InMin = 0, InMax = 0;
    double DoubMin = 0, DoubMax = 0;
    
    
    Func(In, ListSize);
    printFunc(In, ListSize);
    MinMax(In,ListSize,InMin,InMax);
    Func(Doub, ListSize);
    printFunc(Doub, ListSize);
    MinMax(Doub,ListSize,DoubMin,DoubMax);
    Func(Ch, ListSize);
    printFunc(Ch, ListSize);
}

