#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
using namespace std; //Использование всего, что находится в пространстве
void calculate (int number) //Указатель функции Калькулятор (Целые номера)
{
    while(number > 1) //Пока (Номер > 1)
    {
        if (number % 2 == 0) //Если (Процент от 2 = 0)
        {
            number /= 2; //Номер = Номер / 2
        } 
        else //Иначе
        {
            number *= 3; //Номер = Номер * 3
            number += 1; //Номер = Номер + 1
            number /= 2; //Номер = Номер / 2
        }
        cout << number << endl; //Вывод данных (Номер)
    }
}
int main () //Существует функция с именем main и функция возвращает целое число типа int
{
    int number; //Целое (Номер)
    cin >> number; //Ввод данных (Номер)
    calculate(number); //Калькулятор номера
}