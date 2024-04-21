#include "CarMapper.h"
#include <sstream>

string CarMapper::mapObjectToString(const Car &car) {
    std::string result = "Car ID: " + car.getId() + "\n";
    result += "Brand: " + car.getBrand() + "\n";
    result += "Model: " + car.getModel() + "\n";
    result += "Volume: " + car.getVolume() + "\n";
    result += "Body Type: " + string(toString(car.getBodyType())) + "\n";
    result += "Transmission: " + string(toString(car.getTransmission())) + "\n";
    result += "Rate: " + std::to_string(car.getRate()) + "\n";
    result += "Has Car Seat: " + string((car.isHasCarSeat() ? "Yes" : "No")) + "\n";

    return result;
}

Car CarMapper::mapStringToObject(const string &data) {
    std::istringstream iss(data);
    std::string id, brand, model, volume, bodyTypeStr, transmissionStr, rateStr, hasCarSeatStr;

    iss >> id >> brand >> model >> volume >> bodyTypeStr >> transmissionStr >> rateStr >> hasCarSeatStr;

    BodyType bodyType = SEDAN;
    if (bodyTypeStr == "SEDAN") {
        bodyType = SEDAN;
    } else if (bodyTypeStr == "COUPE") {
        bodyType = COUPE;
    } else if (bodyTypeStr == "HATCHBACK") {
        bodyType = HATCHBACK;
    } else if (bodyTypeStr == "CONVERTIBLE") {
        bodyType = CONVERTIBLE;
    } else if (bodyTypeStr == "SUV") {
        bodyType = SUV;
    } else if (bodyTypeStr == "TRUCK") {
        bodyType = TRUCK;
    } else if (bodyTypeStr == "VAN") {
        bodyType = VAN;
    }

    Transmission transmission = MANUAL;
    if (transmissionStr == "MANUAL") {
        transmission = MANUAL;
    } else if (transmissionStr == "AUTOMATIC") {
        transmission = AUTOMATIC;
    } else if (transmissionStr == "VARIATOR") {
        transmission = VARIATOR;
    }

    double rate = stod(rateStr);
    bool hasCarSeat = (hasCarSeatStr == "Yes");

    Car car(id, brand, model, volume, bodyType, transmission, hasCarSeat);

    return car;
}
