#include<iostream>
using namespace std;

class Vehicle{
  
        protected:
        int vehicleId;
        string modelname;
        string manufacture;
        int year;
        static int totalcount;
        
        public:
        
        Vehicle(){
            
        vehicleId = 0;
        modelname = "";
        manufacture = "";
        year = 0;
        totalcount++;
        
        }
        
        Vehicle(int ID, string name, string manu, int y){
            
        vehicleId = ID;
        modelname = name;
        manufacture = manu;
        year = y;
        totalcount++;
        
        }
        
        ~Vehicle(){
                totalcount--;
        }
        
        void setvehicle(int ID, string name, string manu, int y){
            
        vehicleId = ID;
        modelname = name;
        manufacture = manu;
        year = y;

        }
        
        int getid(){
            return vehicleId;
        }
        
        string getname(){
            return modelname;
        }
        
        string getmanu(){
            return manufacture;
        }
        
        int getyear(){
            return year;
        }
        
        void display(){
            
            cout<< " Vehicle ID           : " << vehicleId << endl;
            cout<< " Vehicle Modelname    : " << modelname << endl;
            cout<< " Vehicle Menufacturer : " << manufacture << endl;
            cout<< " Vehicle Year         : " << year << endl;
        }
        
        static int getcount(){
            
            return totalcount;
        }
        
    
};

int Vehicle::totalcount = 0;

class Car: public Vehicle{
    
    public:
    
    string fueltype;
    void setfuel(string fuel){
        fueltype = fuel;
    }
    
    void displayfuel(){
        cout<< "Fuel type :-- " << fueltype << endl;
    }
    
};

class Electriccar: public Car{
  
  public: 
  
  string batterycap;
  
  void setbattery(string bat){
      batterycap = bat;
  }
    
    void displaybat(){
        
        cout<< " Battrycapcity  :-  " << batterycap << endl;
        
    }
};

class Aircarft : public Vehicle{
    
    public: 
    
    string flightrange;
    
    void setflight(string f){
        
        flightrange = f;
    }
    
    void displayflight(){
        
        cout<< " Flight range :- "<< flightrange << endl;
    }
    
};

class Flyingcar : public car, Aircraft{
    
    public:
    
    string fly;
    
    void setfly(string f){
        
        fly = f;
        
    }
    void displayfly(){
        cout<< " Flying :- " << fly << endl;
    }
    
};

class Sportscar : public Electriccar{
    
        int topspeed;
        
        void setspeed(int s){
            
            topspeed = s;
        }
        
        void display(){        
            
            cout<< " top speed :- " << topspeed << endl; 
    
        }
    
}

class Sedan : public Car {
            
};

class Suv : public Car {
    
};
class VehicleRegistry{
  
        private:
        int totalcount;
        int type[100];
        
        Car cars[100];
        Electriccar ecar[100]; 
        Sportscar scar[100]; 
        Flyingcar fcar[100]; 
        Sedan sedan[100]; 
        Suv sev[100];
        
        public: 
        
        VehicleRegistery(){
            totalcount =0;
        }
        
        
        
        
};

int main(){

    
    
    
    
return 0;
}