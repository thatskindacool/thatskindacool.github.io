#include "lab.h"
bool calculateRoot(double a, double b, double c, double &r1, double &r2){
    double discriminant = sqrt((b*b)-4*a*c);
    bool rootExists;
    if(discriminant >= 0) {
	r1 = (-b + sqrt((b*b)-4*a*c))/(2*a);
	r2 = (-b - sqrt((b*b)-4*a*c))/(2*a);
	rootExists = true;
    } else if (discriminant = 0) {
	r1 = (-b + sqrt((b*b)-4*a*c))/(2*a);
	r1 = r2;
	rootExists = true;
    } else {
	//std::cout << "Sorry, there are no real roots for that quadratic." << std::endl;
	rootExists = false;
    }
    return rootExists;
}
