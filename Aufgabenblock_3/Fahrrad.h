#pragma once
#include "Fahrzeug.h"

/*
Fahrrad Klasse.
Erbt von Fahrzeug
*/
class Fahrrad :
	public Fahrzeug
{

public:
	//Konstruktoren
	Fahrrad();
	Fahrrad(string sName, double dMaxKmh);	//Name, MaxGeschwindigkeit

	//Copyconstructor
	Fahrrad(const Fahrrad&);

	//Destruktor
	virtual ~Fahrrad();

	//Methoden
	void vZeichnen(Weg*);

private:
	double dGeschwindigkeit();
};

