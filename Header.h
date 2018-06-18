#pragma once

#include <iostream>

using std::string;

class Zmogus {
protected:
	string vardas;
	string pavarde;
	
public:
	Zmogus() {}
	Zmogus(string vardas, string pavarde) {}
	string getVardas() { return vardas; }
	string getPavarde() { return pavarde; }
	

	void setVardas(string v) { vardas = v; }
	void setPavarde(string p) { pavarde = p; }
	

};

class Studentas: public Zmogus {
private:
	double getGalutinisBalas;
public:
	double getGalutinisBalas() { return getGalutinisBalas; }
	void getGalutinisBalas(double gb) { getGalutinisBalas = gb; }
};