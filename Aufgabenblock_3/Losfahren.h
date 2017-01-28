#pragma once
#include "FahrAusnahme.h"
class Losfahren :
	public FahrAusnahme
{
public:
	//Konstruktor und Destruktor
	Losfahren(Fahrzeug* pFahrzeug, Weg* pWeg);
	virtual ~Losfahren();

	//Methoden
	void vBearbeiten();
};

