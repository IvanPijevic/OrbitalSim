#ifndef BODY_H
#define BODY_H

#include <SFML/System/Vector2.hpp>

class Body
{
public:
	

private:
	double m_mass;							//Mass in kilograms [kg]
	sf::Vector2<double> m_position;			//Position in meters relative to the Sun [m]
	sf::Vector2<double> m_speed;			//Velocity of the body relative to the Sun (Sun's velocity = 0.0) [m/s]
	sf::Vector2<double> m_acceleration;		//Acceleration of the body  [m/s^2]
};

#endif  //BODY_H