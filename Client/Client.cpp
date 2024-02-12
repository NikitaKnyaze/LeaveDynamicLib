// Client.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Leave.h"
#include <windows.h>

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   std::string name;
   NewLeav::Leaver c;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << c.leave(name);
}
