#include <iostream>

using namespace std;

class Car{
    protected:
        string m_DriveMode;
    private:
        int m_MaxSeating;
        int m_price;
        void m_UpdatePrice(int base = 500000){
            m_price = base * m_MaxSeating;
        }
    public:
        string m_brand;
        string m_model;
        int m_year;
        Car(string x, string y, int z, int s){
            m_brand = x;
            m_model = y;
            m_year = z;
            m_MaxSeating = s;
            m_UpdatePrice();
        }
        int getPrice(){
            return m_price;
        }
        int MaxSeating(){
            return m_MaxSeating;
        }
        string getDriveMode(){
            return m_DriveMode;
        }
};     

class BMW_Car : public Car{
    public:
        BMW_Car(string x, string y, int z, int s): Car(x, y, z, s){
            cout << "Constructing BMW_Car" << endl;
            m_DriveMode = "Rear-Wheel";
        }
};
class AUDI_Car : public Car{
    public:
        AUDI_Car(string x, string y, int z, int s): Car(x, y, z, s){
            cout << "Constructing AUDI_Car" << endl;
            m_DriveMode = "Front-Wheel";
        }
};
class BENZ_Car : public Car{
    public:
        BENZ_Car(string x, string y, int z, int s): Car(x, y, z, s){
            cout << "Constructing BENZ_Car" << endl;
            m_DriveMode = "Front-Wheel";
        }
};

int main(){
    BMW_Car car_1("BMW", "X5", 2020, 5);
    cout<< car_1.m_brand << " : DriveMode = " << car_1.getDriveMode() << endl;
    AUDI_Car car_2("AUDI", "A1", 2023, 5); 
    cout<< car_2.m_brand << " : DriveMode = " << car_2.getDriveMode() << endl;
    BENZ_Car car_3("Benz", "g-class", 2023, 5);
    cout<< car_3.m_brand << " : DriveMode = " << car_3.getDriveMode() << endl;
}