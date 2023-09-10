#include <iostream>
#include <ctime>
using namespace std;

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

