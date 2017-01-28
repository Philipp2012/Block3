#pragma once
#include "FzgVerhalten.h"


class FzgParken :
	public FzgVerhalten
{
public:
	//Konstruktor und Destruktor
	FzgParken(Weg* pWeg, double dStartzeit);	//Parkende Fahrzeuge
	virtual ~FzgParken();

	//Methoden
	double dStrecke(Fahrzeug*, double Zeitraum);

	//Getter
	int getSpeed() const;

private:
	double p_dStartzeit;
};

