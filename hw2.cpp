#include <iostream>
using namespace std;

class BikeOwner{
    public:
            string fullname;
            unsigned short year;
            bool drunk;
            char gender;
            unsigned short iq;

    BikeOwner(){

    }

    void out(){

    }
};

class Bike{
    public:
           string model;
    unsigned short year;
            float power;
     unsigned int price;
           float weight;
         string country;
           string brand;
           ///////ASSOCIATIO////////
           BikeOwner* biker;
           /////////////////////////
           Bike(){


           }
           Bike(string m, unsigned short y, float pwr, unsigned int pr, float w, string c, string br){
               model = m;
                year = y;
               power = pwr;
               price = pr;
              weight = w;
             country = c;
               brand = br;
           }
           void out(){
               cout << "===========================Bike==============================" << endl;
               cout << "Model:\t" << model << endl;
               cout << "Year:\t" << year << endl;
               cout << "Power:\t" << power << endl;
               cout << "Price:\t" << price << endl;
               cout << "Weight:\t" << weight << endl;
               cout << "Country:\t" << country << endl;
               cout << "Brand:\t" << brand << endl;
               cout << "===========================Bike==============================" << endl;

           }
};

int main(){
    
    Bike *pmy_bike = new Bike; // тоже самое Bike my_bike;
    pmy_bike->out(); //тоже самое my_bike.out();
    // cout << sizeof(my_bike) << endl;
    Bike *pzuckerberg_bike = new Bike;
    pzuckerberg_bike -> out();
    /*
    Bike zuckerberg_bike("Harley facebitson", 2015, 250, 10000, 450, "Canada", "Harley");
    zuckerberg_bike.out();
    */
    
    delete pzuckerberg_bike;
    delete pmy_bike;

}