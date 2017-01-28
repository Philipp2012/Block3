#pragma once
#include "FahrAusnahme.h"
#include "Weg.h"

class Streckenende :
	public FahrAusnahme
{
public:
	//Konstruktor und Destruktor
	Streckenende(Fahrzeug* pFahrzeug, Weg* pWeg);
	virtual ~Streckenende();

	//Methoden
	void vBearbeiten();
};

