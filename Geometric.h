#pragma once
#include "Base.h"

class Geometric : public Base {
public:
	Geometric();
	~Geometric();

	/*��� ��� ���� ������������ ����� override, �� ��� ������������ ��������������� ���������� �������, ���������� ������� �� ���, ��� �� ��������
	�����������.
	�������� ���� �� �� ��������: "void sum() override;" ���������� �� �������
	� � ������, ����� �� override �� ����  "void sum();" ���������� ��� �� ��� �������� ��������*/
	void sum(int count) override;
	void change();
};