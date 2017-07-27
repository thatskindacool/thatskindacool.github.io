/* source code */
#include "lab.h"
int main(){
	//std::cout << "here" << std::endl;
	std::string s = getenv("QUERY_STRING");
	//std::string p = getenv("PATH");
	if(s != "") {
	    //std::cout << s << std::endl; //a=3&b=4&c=5
	} else {
	    //std::cout << "Sorry, s is not available" << std::endl;
	}
	char ch; double a,b,c,r1,r2;
	std::istringstream iss(s);
	//      a     =    3
	iss >> ch >> ch >> a;
	//std::cout << "a is " << a << std::endl;
	//      &     b     =     4
	iss >> ch >> ch >> ch >> b;
	//std::cout << "b is " << b << std::endl;
	//      &     c     =     5
	iss >> ch >> ch >> ch >> c;
	//std::cout << "c is " << c << std::endl;
	// std::cout << p << std::endl;
	// std::cout << "and here" << std::endl;#include ""
	createGraph(a, b, c);
	bool rootExists = calculateRoot(a,b,c,r1,r2);
	if(rootExists) {
	    //std::cout << "real roots " << r1 << " and " << r2 << std::endl;
	} else {
	    std::cout << "The roots does not exist for that function" << std::endl;
	}
	
	formatReport(r1,r2);
	
}
