#ifndef OP_PROJ_CONSOLE_ORDER_H
#define OP_PROJ_CONSOLE_ORDER_H


#include "string"
#include "../car/Car.h"
#include "ctime"
#include "chrono"

class Order {
private:
    std::string id;
    tm startDate{};
    tm endDate{};
    string carId;
    string clientId;
    double price{};
public:
    Order(std::string id, const tm &startDate,
          const tm &endDate, string carId, string clientId,
          double price);

    Order();

    const string &getId() const;

    void setId(const string &id);

    const tm &getStartDate() const;

    void setStartDate(const tm &startDate);

    const tm &getEndDate() const;

    void setEndDate(const tm &endDate);

    const string &getCarId() const;

    void setCarId(const std::string &carId);

    const string &getClientId() const;

    void setClientId(const string &clientId);

    double getPrice() const;

    void setPrice(double price);
};


#endif //OP_PROJ_CONSOLE_ORDER_H
