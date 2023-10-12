#pragma once
#include <iostream>
#include "Car.h"

class CarBuilder {  
public:  
    CarBuilder() {  
        m_car = std::unique_ptr<Car>(new Car());  
    }  
  
    void setColor(const std::string& color) {  
        m_car->setColor(color);  
    }  
  
    void setEngineType(const std::string& engineType) {  
        m_car->setEngineType(engineType);  
    }  
  
    void setSeatCount(int seatCount) {  
        m_car->setSeatCount(seatCount);  
    }  
  
    std::unique_ptr<Car> getCar() {  
        return std::move(m_car);  
    }  
  
private:  
    std::unique_ptr<Car> m_car;  
};  