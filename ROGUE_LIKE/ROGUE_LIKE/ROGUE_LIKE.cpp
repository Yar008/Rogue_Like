// ROGUE_LIKE.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <Windows.h> 
#include <vector> 
#include <conio.h> 
#include "SuperObj.h" 
#include "Entity.h" 
#include "Box.h"
using namespace std;
//----- env var ----- 
const int HIGH = 10;
const int WIDTH = 10;

int fps = 4;
int latency = 1000 / fps;
vector<Box<unsigned>> curArr;
//===== env var ===== 




int main()
{
    char keyboardPress;
    int main_flag = 1;
    while (main_flag)
    {
        // -----------STEP 1: input----------- 
        // keyboard reciver 
        keyboardPress = _getch();
        switch (keyboardPress)
        {
        case 'w':

            break;
        case 'd':
            break;
        case 's':
            break;
        case 'a':
            break;
        case ' ':
            break;
        }

        // environment motor 
        // здесь будет логика всех объектов:  
        // исполнение каких то паттернов движения, появление, применение свойств итд 
        // в общем все, что должно произойти за этот такт 



        // ---------STEP 2: processing--------- 
        // здесь же примененные действия обрабатываются, в частности - в блоке коллизии 

        for (SuperObject* curObj : objectArr)
        {

        }

        // -----------STEP 3: output----------- 
        // вывод сцены на экран 
        // очистка сцены и наполнение ее 
        system("cls");
        for (int i = 0; i < HIGH; ++i)
            for (int j = 0; j < WIDTH; ++j)
                display[i][j] = '.';
        // добавление всех объектов на сцену 
        for (int i = 0; i < objectArr.size(); ++i)
            display[objectArr[i]->y][objectArr[i]->x] = objectArr[i]->icon;
        // вывод сцены на экран 
        for (int i = 0; i < HIGH; ++i)
        {
            for (int j = 0; j < WIDTH; ++j)
                cout << display[i][j];
            cout << "\n";
        }

        Sleep(latency);
        // здесь обработка клавиш для движения персонажа 
    }
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
