#include "fabric.h"

Base* createObj(string name)
{
	if (name == "����")
		return new Poet();
	if (name == "���������")
		return new Romantic();
	if (name == "�������")
		return new Fantasist();
	string err = "��� ������� �� ���������";
	throw err;
}