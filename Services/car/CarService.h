#include "../../Entities/car/Car.h"
#include <vector>
#include "sstream"
#include <fstream>
#include <iostream>
using namespace std;

class CarService {
private:
    void insertCar(Car &car);

    void editCar(Car &car);

    void deleteCar(Car &car);

    vector<Car> getAllCars();

    Car getCarById(string id);

    vector<Car> findAllByBrand(string brand);

    vector<Car> findAllByModel(string brand);

    vector<Car> findAllByVolume(string brand);

};


