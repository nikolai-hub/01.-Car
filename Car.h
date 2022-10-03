#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {
private:
	string brand;
	string model;
	int year = 0;
public:
	Car(string& sBrand, string& sModel, int nYear) : brand(sBrand), model(sModel), year(nYear){}
	const string& GetBrand(void) const { return brand; }
	const string& GetModel(void) const { return model; }
	const int GetYear(void) const { return year; }
};





#endif // !CAR_H
