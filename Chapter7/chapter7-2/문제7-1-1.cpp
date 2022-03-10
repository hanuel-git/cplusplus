#include<iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int n) : gasolineGauge(n)
	{ }
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int n1, int n2) : Car(n1), electricGauge(n2)
	{ }
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int n1, int n2, int n3)
		: HybridCar(n1, n2), waterGauge(n3)
	{ }
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸° : " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·® : " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·® : " << waterGauge << endl;
	}
};

int main()
{
	Car ca(10);
	cout << "ca gasolineGauge is " << ca.GetGasGauge() << endl << endl;
	HybridCar hyb(20, 30);
	cout << "hyb gasolineGauge is " << hyb.GetGasGauge() << endl;
	cout << "hyb electricGauge is " << hyb.GetElecGauge() << endl;
	HybridWaterCar hwc(40, 50, 60);
	hwc.ShowCurrentGauge();

	return 0;
}