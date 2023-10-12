#include <iostream>
class Car {  
public:  
    void setColor(const std::string& color) {  
        m_color = color;  
    }  
  
    void setEngineType(const std::string& engineType) {  
        m_engineType = engineType;  
    }  
  
    void setSeatCount(int seatCount) {  
        m_seatCount = seatCount;  
    }  
    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "Car: " << car.m_color << ", " << car.m_engineType << ", " << car.m_seatCount;
        return os;
    }
private:  
    std::string m_color;  
    std::string m_engineType;  
    int m_seatCount;  
}; 