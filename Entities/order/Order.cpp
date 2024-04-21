#include "Order.h"

#include <utility>

Order::Order() {}

Order::Order(string id, const tm &startDate,
             const tm &endDate, string carId, string clientId,
             double price) : id(std::move(id)), startDate(startDate), endDate(endDate), carId(std::move(carId)),
                             clientId(std::move(clientId)),
                             price(price) {}

const string &Order::getId() const {
    return this->id;
}

void Order::setId(const string &id) {
    Order::id = id;
}

const tm &Order::getStartDate() const {
    return startDate;
}

void Order::setStartDate(const tm &startDate) {
    Order::startDate = startDate;
}

const tm &Order::getEndDate() const {
    return endDate;
}

void Order::setEndDate(const tm &endDate) {
    Order::endDate = endDate;
}

const string &Order::getCarId() const {
    return carId;
}

void Order::setCarId(const string &carId) {
    Order::carId = carId;
}

const string &Order::getClientId() const {
    return clientId;
}

void Order::setClientId(const string &clientId) {
    Order::clientId = clientId;
}

double Order::getPrice() const {
    return price;
}

void Order::setPrice(double price) {
    Order::price = price;
}

