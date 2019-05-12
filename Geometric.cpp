#include "Geometric.h"
#include <iostream>
#include <fstream> //для работы с файлами
#include <cmath> //для математических операций

using namespace std;

//конструктор, считывание данных из файла
Geometric::Geometric()
{
	/* так как мы читаем из файла, то создаем объект класса ifstream и сразу связываем его с файлом,
	ios_base::in говорит нам о том, что мы открываем файл для чтения */
	ifstream fin("Geometric.txt", ios_base::in);
	if (!fin.is_open()) //проверка на открытие файла
	{
		cout << "Geometric.txt не открылся для чтения!" << endl;
		system("pause");
		exit(1); //если файл не октрылся, то завершаем работу программы с кодом ошибки 1
	}
	//считывание данных из файла, работает анаагично cin >> first_element, только данные вводятся не склавиатуры, а из файла
	fin >> first_element >> difference;

	fin.close(); //закрытие файл
}

//деструктор, запись данных в файл
Geometric::~Geometric()
{
	/* так как мы записываем в файл, то создаем объект класса ofstream и сразу связываем его с файлом,
	ios_base::out говорит нам о том, что мы открываем файл для записи, то есть удаляем его содержимое и вносим новое */
	ofstream fout("Geometric.txt", ios_base::out);
	if (!fout.is_open()) //проверка на открытие файла
	{
		cout << "Файл Geometric.txt не открылся для записи!" << endl;
		system("pause");
		exit(1); //если файл не октрылся, то завершаем работу программы с кодом ошибки 1
	}
	/* запись данных в файл, работает аналагочно cout << first_element << " ", только данные выводятся не
	в командную строку, а в файл */
	fout << first_element << " " << difference;

	fout.close(); //закрытие файл
}

//переопределение виртуальной функции
void Geometric::sum(int count)
{
	system("cls");
	double sum = 0.0; //сумма изначально равна 0
	//выводим, что это геометрическая прогрессия и её отношение
	cout << "Геометрическая прогрессия" << endl << endl;
	cout << "Отношение: " << difference << endl << endl;
	cout << "Последовательность: ";
	//бежим по цикл столько раз, сколько первых элментов мы хотим посчитать
	for (int i = 0; i < count; ++i)
	{
		//pow(difference, i) - это difference в степени i
		cout << first_element * pow(difference, i) << " ";  //выводим очередной элемент
		sum += first_element * pow(difference, i); //прибавляем очередной элемент к сумме
	} 
	cout << endl << endl << "Сумма " << count << " элементов: " << sum << endl << endl; //выводим сумму
}

//функция изменения данных
void Geometric::change()
{
	cout << endl << "Введите новые данные:" << endl; //просим ввести новые данные
	cout << "Первый элемент: ";
	cin >> first_element; //вводим новое первое число
	cout << "Отношение: ";
	cin >> difference; //вводим новое отношение
}
