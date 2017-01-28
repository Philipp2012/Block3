#pragma once
#include "Weg.h"

class FzgVerhalten
{
public:
	//Konstruktor und Destruktor
	FzgVerhalten(Weg* pWeg);
	virtual ~FzgVerhalten();

	//Methoden
	virtual double dStrecke(Fahrzeug*, double)=0;

	//Getter
	virtual int getSpeed() const = 0;

protected:
	Weg* p_pWeg;


};

