#include "Arithmetic.h"
#include <iostream>
#include <fstream> //��� ������ � �������

using namespace std;

//�����������, ���������� ������ �� �����
Arithmetic::Arithmetic()
{
	/* ��� ��� �� ������ �� �����, �� ������� ������ ������ ifstream � ����� ��������� ��� � ������,
	ios_base::in ������� ��� � ���, ��� �� ��������� ���� ��� ������ */
	ifstream fin("Arithmetic.txt", ios_base::in);
	if (!fin.is_open()) //�������� �� �������� �����
	{
		cout << "Arithmetic.txt �� �������� ��� ������!" << endl;
		system("pause");
		exit(1); //���� ���� �� ��������, �� ��������� ������ ��������� � ����� ������ 1
	}
	//���������� ������ �� �����, �������� ��������� cin >> first_element, ������ ������ �������� �� �����������, � �� �����
	fin >> first_element >> difference;

	fin.close(); //�������� ����
}

//����������, ������ ������ � ����
Arithmetic::~Arithmetic()
{
	/* ��� ��� �� ���������� � ����, �� ������� ������ ������ ofstream � ����� ��������� ��� � ������,
	ios_base::out ������� ��� � ���, ��� �� ��������� ���� ��� ������, �� ���� ������� ��� ���������� � ������ ����� */
	ofstream fout("Arithmetic.txt", ios_base::out);
	if (!fout.is_open()) //�������� �� �������� �����
	{
		cout << "���� Arithmetic.txt �� �������� ��� ������!" << endl;
		system("pause");
		exit(1); //���� ���� �� ��������, �� ��������� ������ ��������� � ����� ������ 1
	}
	/* ������ ������ � ����, �������� ���������� cout << first_element << " ", ������ ������ ��������� ��
	� ��������� ������, � � ���� */
	fout << first_element << " " << difference;

	fout.close(); //�������� ����
}

//��������������� ����������� �������
void Arithmetic::sum(int count)
{
	system("cls");
	double sum = 0.0; //����� ���������� ����� 0
	//�������, ��� ��� �������������� ���������� � � ��������
	cout << "�������������� ����������" << endl << endl;
	cout << "��������: " << difference << endl << endl;
	cout << "������������������: ";
	//����� �� ���� ������� ���, ������� ������ �������� �� ����� ���������
	for (int i = 0; i < count; ++i)
	{
		cout << first_element + difference * i << " "; //������� ��������� �������
		sum += first_element + difference * i; //���������� ��������� ������� � �����
	}
	cout << endl << endl << "����� " << count << " ���������: " << sum << endl << endl; //������� �����
}

//������� ��������� ������
void Arithmetic::change()
{
	cout << endl <<  "������� ����� ������:" << endl; //������ ������ ����� ������
	cout << "������ �������: ";
	cin >> first_element; //������ ����� ������ �����
	cout << "��������: ";
	cin >> difference; //������ ����� ��������
}
