// Mode.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define MODE 1
#ifndef MODE 
#error "Unknown mode, the program must be completed..."
#endif

int add(int a, int b)
{

	return a + b;
}

int main()
{
	
#if MODE == 1
	std::cout << "I am in force mode" << std::endl;
	int x, y;
	std::cout << "Enter the first enteger:" << std::endl;
	std::cin >> x;
	std::cout << "Enter the second enteger:" << std::endl;
	std::cin >> y;
	std::cout << "The sum of the first and second entegers is: " << add(x, y) << std::endl;
#elif MODE == 0
	std::cout << "I am in trainig mode" << std::endl;
#else
	std::cout << "Unknown mode" << std::endl;
#endif


	return 0;
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
