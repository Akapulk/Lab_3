#pragma once
#include "Base.h"

class Geometric : public Base {
public:
	Geometric();
	~Geometric();

	/*Так как было использовано слово override, то при неправильном переопределении виртуально функции, компилятор говорил бы нам, что мы написали
	неправильно.
	Например если бы мы написали: "void sum() override;" компилятор бы ругался
	А в случае, когда бы override не было  "void sum();" компилятор дал бы нам спокойно написать*/
	void sum(int count) override;
	void change();
};