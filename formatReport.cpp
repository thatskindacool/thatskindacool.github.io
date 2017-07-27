#include "lab.h"

void formatReport(double &r1, double &r2){
    //use pointers
    //goal:read report.html into a dynamically allocated buffer
    //replaced the ?'s with r1 and r2
    //since digits needed are > 1, then we need 
    //another buffer to hold the result
    //send that info to webserver(i.e. use cout b/c cgi)
    //read all of the characters
    int chars = 0;
    char ch;
    std::ifstream ifs("../lab7/rootsDisplay.html");
    while(ifs.get(ch)) chars++;
    //std::cout << chars << std::endl;
    
    char* buf = new char[chars]; //array of 243 chars
    //2 are ?, each could expand to several? additional chars
    //char* buf1 = new char[chars+2*Max];
    ifs.close();
    ifs.open("../lab7/rootsDisplay.html"); //reset to beginning of the file
    std:: string s;
    
    while(ifs.get(ch)) {
	 if(ch=='?') {
	     std::cout << r1;
	 } else {
	     std::cout << ch;
	 }
	 s += ch; //string with all of the characters
     }
    std::cout << std::endl;
    //std::cout << s << std::endl;
    
}
