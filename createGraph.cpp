#include "lab.h"
void createGraph(double a, double b, double c) {
    std::ofstream ofs("quad.gp"); // gp for gnuplot
    std::ostringstream oss; //ostringstream creates string as an output to a program (gnuplot)
    
    oss << "set term png size 300, 200\n";
    oss << "set output \"graph.png\" \n";
    oss << "f(x) = " << a << "*x**2 + " << b << "*x + " << c << "\n";
    oss << "plot f(x)\n";
    //std::cout << oss.str() << std::endl;
    // automatically converts doubles to strings
    ofs << oss.str() << std::endl;
    ofs.close();
    system("gnuplot < quad.gp"); //anything placed inside is run in the system
    system("cp graph.png ../lab7");
}
