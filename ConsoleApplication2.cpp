// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

void SolveFunction(float i)
{
    float y = -0.23 * i * 2 + i;
    std::cout << "Y=" << y << "\t" << "X=" << i << std::endl;
}

void FirstTask()
{
    std::cout << "Первое задание" << std::endl;
    int number,result=0;
    std::cout << "Введите число" << std::endl;
    std::cin >> number;
    while (number!=0)
    {
        result += fmod(number, 10);
        number = number / 10;
    }
    std::cout << "Результат: " << fabs(result) <<std::endl;
}

void SecondTask()
{
    //y=-0.23*x*2+x
    float minX, maxX, step;
    std::cout << "Второе задание" << std::endl;
    std::cout << "Введите min x" << std::endl;
    std::cin >> minX;
    std::cout << "Введите max x" << std::endl;
    std::cin >> maxX;
    std::cout << "Введите шаг" << std::endl;
    std::cin >> step;

    std::cout << "Таблица" << std::endl;
    if (step>0)
        for (float i = minX; i <= maxX; i+=step)
        {
            SolveFunction(i);
        }
    else if (step<0)
    {
        for (float i = maxX; i >= minX; i+=step)
        {
            SolveFunction(i);
        }
    }
    else
    {
        std::cout << "Шаг равен нулю"<< std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    FirstTask();
    SecondTask();
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
