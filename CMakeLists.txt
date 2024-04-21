cmake_minimum_required(VERSION 3.27)
project(CarLeasingService)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)



find_package(nlohmann_json 3.2.0 REQUIRED)
add_library(foo
        Services/order/OrderService.cpp
        Services/car/CarService.h
        Services/car/CarService.cpp
        Entities/car/Car.cpp
        Entities/order/Order.cpp
        Entities/order/Order.cpp
        mapper/car/CarMapper.h
        mapper/car/CarMapper.cpp
        mapper/order/OrderMapper.cpp
        Entities/Person.h
        Entities/Person.cpp
)
target_link_libraries(foo PRIVATE nlohmann_json::nlohmann_json)

add_executable(untitled4 main.cpp
        Services/car/CarService.h
        Services/car/CarService.cpp
        Entities/car/Car.cpp
        Entities/order/Order.cpp
        Entities/order/Order.cpp
        mapper/car/CarMapper.h
        mapper/car/CarMapper.cpp
        mapper/order/OrderMapper.cpp
        Entities/Person.h
        Entities/Person.cpp
)
target_link_libraries(untitled4
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)

