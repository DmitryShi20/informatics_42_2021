#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <math.h> //Использоание математических функций
using namespace std; //Использование всего, что находится в пространстве
int calc(int n) //Целое Калькулятор (n)
{
    int i,x; //Целые (i x)
    x = 1; //Приравнение
    for (i = 1;i <= n;i++) //Цикл с точным кол-вом действий
    {
        x *= i; //x = x * i
    };
return x; //Вернуть x
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    int k,j,c,t = 0; //Целые (k,j,c,t = 0)
    cin>>k; //Ввод k
    cout<<"1"<<"\n"; //Вывод 1 (Переход на новую строку)
    for (j = 1;j <= k;j++) //Цикл с точным кол-вом действий
    {
        for (c = 0; c <= j; c++) //Цикл с точным кол-вом действий
        {
            cout<<(calc(j) / (calc(c) * calc(j - c)))<<" "; //Вывод (j / (c * (j - c)))
        };
    cout<<"\n"; //Вывод (Переход на новую строку)
    };
    return 0; //Вернуть 0
}