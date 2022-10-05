class Car {
private : 
int price ;
int fuel = 0 ;
int passengers =0;


public: 

void fillFul(){
fuel = 100 ;
}

void carStaus(){
    cout << "Fuel: " << fuel << "\n";
    cout << "Passengers: " << passengers << "\n";
}


};