#pragma once
#include "Base.h"

class Arithmetic : public Base {
public:
	Arithmetic();
	~Arithmetic();

	/*��� ��� ���� ������������ ����� override, �� ��� ������������ ��������������� ���������� �������, ���������� ������� �� ���, ��� �� �������� 
	�����������.
	�������� ���� �� �� ��������: "void sum() override;" ���������� �� �������
	� � ������, ����� �� override �� ����  "void sum();" ���������� ��� �� ��� �������� ��������*/
	void sum(int count) override;
	void change();
};