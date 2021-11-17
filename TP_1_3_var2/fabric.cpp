#include "fabric.h"

Base* createObj(string name)
{
	if (name == "Поэт")
		return new Poet();
	if (name == "Романтист")
		return new Romantic();
	if (name == "Фантаст")
		return new Fantasist();
	string err = "Тип объекта не распознан";
	throw err;
}