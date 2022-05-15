#include <iostream>
#include <string>

using namespace std;

class packages
{
public:
    string Address, City, Province, ZIP;
    float Weight, CostPerOunce, Calculated;

    packages(float CostPerOunce, float Weight, string Address, string Province, string City, string ZIP)
    {

        this->Weight = Weight;
        this->CostPerOunce = CostPerOunce;
        this->Address = Address;
        this->Province = Province;
        this->City = City;
        this->ZIP = ZIP;
        Calculatedcost();
    }

    void Calculatedcost()
    {

        Calculated = Weight * CostPerOunce;
    }
    double getCalculated()
    {

        return Calculated;
    }
};

class twodaypackage : protected packages
{

    int fee;

public:
    twodaypackage(int fee) : packages(40, 34, "A-002 block C", "Sindh", "Karachi", "15979")
    {

        this->fee = fee;
    }

    void Calculatedcost(int Addressi)
    {
       
        
         Calculated=Weight*Addressi;
        Calculated = Calculated + fee ;

        cout << "SHIPPING COST: " << Calculated << endl;
    }
};
class overnightpackages : protected packages
{

    int Addressfee, Extra;

public:
    overnightpackages(int ad) : packages(60, 34, "A-002 block C", "Sindh", "Karachi", "15979")
    {

        Addressfee = ad;
    }
    void Calculatedcost()
    {

        Extra = Addressfee + CostPerOunce;
        cout << "AddressRESS: " << Address << endl;
        cout << "PROVINCE : " << Province << endl;
        cout << "CITY : " << City << endl;
        cout << "ZIP CODE : " << ZIP << endl;
         cout<<"INITIAL COST: "<<Calculated<<endl;
        cout << "COST AFTER ADDED FEES: " << Extra << endl;
    }

    int getcost()
    {

        return Extra;
    }
};
int main()
{
    int n;
    overnightpackages over(70);
    over.Calculatedcost();

    twodaypackage pack(10000);
    n = over.getcost();
    pack.Calculatedcost(n);
}
