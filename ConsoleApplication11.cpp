// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "Header.h"

int main()
{
    char simvol;
    std::string str1;
    bool vihod = true;
    setlocale(LC_ALL, "Russian");
    Counter* ptr = new Counter();;
    do
    {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:";
        std::cin >> str1;
        //std::cout << "Вы ввели число:" << str1<<std::endl;;
        if (str1 == "yes")
        {
            int num;
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> num;
            delete ptr;
            ptr = new Counter(num);
            vihod = false;
        }
        else
            if (str1 == "no")
            {
                ptr = new Counter();
                vihod = false;

            }
            else
            {
                std::cout << "Неправильный ввод. Повторите:";

            }




    } while (vihod);


    vihod = true;

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'):";

        std::cin >> str1;
        if (str1 == "+")
        {
            ptr->inc();

        }
        else
            if (str1 == "-")
            {
                ptr->dec();

            }
            else
                if (str1 == "=")
                {

                    std::cout << "Счетчик равен =" << ptr->vozvrat();
                    std::cout << std::endl;

                }
                else
                    if (str1 == "x")
                    {
                        vihod = false;

                    }
                    else  std::cout << "ВЫ ввели неизвестную команду:";


    } while (vihod);
    delete ptr;
    std::cout << "До свидания!";
}

/*
В этом задании вы вынесете класс в отдельный файл.

Возьмите класс счётчика из предыдущего домашнего задания.

Вынесите этот класс в отдельный файл, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.
Пример работы программы
Консоль

Вы хотите указать начальное значение счётчика? Введите да или нет: да
Введите начальное значение счётчика: 6
Введите команду ('+', '-', '=' или 'x'): +
Введите команду ('+', '-', '=' или 'x'): +
Введите команду ('+', '-', '=' или 'x'): =
8
Введите команду ('+', '-', '=' или 'x'): -
Введите команду ('+', '-', '=' или 'x'): =
7
Введите команду ('+', '-', '=' или 'x'): x
До свидания!

*/