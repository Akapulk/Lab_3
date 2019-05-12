#include "Geometric.h"
#include <iostream>
#include <fstream> //��� ������ � �������
#include <cmath> //��� �������������� ��������

using namespace std;

//�����������, ���������� ������ �� �����
Geometric::Geometric()
{
	/* ��� ��� �� ������ �� �����, �� ������� ������ ������ ifstream � ����� ��������� ��� � ������,
	ios_base::in ������� ��� � ���, ��� �� ��������� ���� ��� ������ */
	ifstream fin("Geometric.txt", ios_base::in);
	if (!fin.is_open()) //�������� �� �������� �����
	{
		cout << "Geometric.txt �� �������� ��� ������!" << endl;
		system("pause");
		exit(1); //���� ���� �� ��������, �� ��������� ������ ��������� � ����� ������ 1
	}
	//���������� ������ �� �����, �������� ��������� cin >> first_element, ������ ������ �������� �� �����������, � �� �����
	fin >> first_element >> difference;

	fin.close(); //�������� ����
}

//����������, ������ ������ � ����
Geometric::~Geometric()
{
	/* ��� ��� �� ���������� � ����, �� ������� ������ ������ ofstream � ����� ��������� ��� � ������,
	ios_base::out ������� ��� � ���, ��� �� ��������� ���� ��� ������, �� ���� ������� ��� ���������� � ������ ����� */
	ofstream fout("Geometric.txt", ios_base::out);
	if (!fout.is_open()) //�������� �� �������� �����
	{
		cout << "���� Geometric.txt �� �������� ��� ������!" << endl;
		system("pause");
		exit(1); //���� ���� �� ��������, �� ��������� ������ ��������� � ����� ������ 1
	}
	/* ������ ������ � ����, �������� ���������� cout << first_element << " ", ������ ������ ��������� ��
	� ��������� ������, � � ���� */
	fout << first_element << " " << difference;

	fout.close(); //�������� ����
}

//��������������� ����������� �������
void Geometric::sum(int count)
{
	system("cls");
	double sum = 0.0; //����� ���������� ����� 0
	//�������, ��� ��� �������������� ���������� � � ���������
	cout << "�������������� ����������" << endl << endl;
	cout << "���������: " << difference << endl << endl;
	cout << "������������������: ";
	//����� �� ���� ������� ���, ������� ������ �������� �� ����� ���������
	for (int i = 0; i < count; ++i)
	{
		//pow(difference, i) - ��� difference � ������� i
		cout << first_element * pow(difference, i) << " ";  //������� ��������� �������
		sum += first_element * pow(difference, i); //���������� ��������� ������� � �����
	} 
	cout << endl << endl << "����� " << count << " ���������: " << sum << endl << endl; //������� �����
}

//������� ��������� ������
void Geometric::change()
{
	cout << endl << "������� ����� ������:" << endl; //������ ������ ����� ������
	cout << "������ �������: ";
	cin >> first_element; //������ ����� ������ �����
	cout << "���������: ";
	cin >> difference; //������ ����� ���������
}
