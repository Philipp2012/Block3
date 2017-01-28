#pragma once
#include "FzgVerhalten.h"


class FzgFahren :
	public FzgVerhalten
{
public:
	//Konstruktor und Destruktor
	FzgFahren(Weg* pWeg);
	virtual ~FzgFahren();

	//Methoden
	double dStrecke(Fahrzeug*, double Zeitraum);
	int getSpeed() const;
};

