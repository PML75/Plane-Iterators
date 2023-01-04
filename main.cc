#include <iostream>
#include <map>
#include <vector>

#include "plane.h"

using namespace std;

int main() {
  std::vector<double> weights{3.2, 4.7, 2.1, 5.5, 9.8, 7.4, 1.6, 9.3};
  std::cout << "Printing out all the weights: " << std::endl;
 
  for (std::vector<double>::iterator it = weights.begin(); it != weights.end(); it++) {
    cout << *it << " ";
  }
  

  std::cout << std::endl;
  std::map<std::string, std::string> abbrevs{{"AL", "Alabama"},
                                             {"CA", "California"},
                                             {"GA", "Georgia"},
                                             {"TX", "Texas"}};
  std::map<std::string, double> populations{
      {"CA", 39.2}, {"GA", 10.8}, {"AL", 5.1}, {"TX", 29.5}};
  std::cout << "\nPrinting out the state populations: " << std::endl;

  map<string, string>::iterator itState = abbrevs.begin();
  for (map<string, double>::iterator itPop = populations.begin(); itPop != populations.end(); itPop++)
  {
    cout << "Population of " << abbrevs.at(itPop->first) << ": " << itPop->second << " million" << endl;
  }
  std::cout << std::endl;

  vector<Plane> fleet;

  Plane p1;
  fleet.push_back(p1);


  Plane p2(150, 75, "New York City");
  fleet.push_back(p2);


  Plane p3(220, 220, "Atlanta");
  Plane p4(75, 75, "Guatemala City");
  Plane p5(125, 94, "Medellin");


  fleet.push_back(p3);
  fleet.push_back(p4);
  fleet.push_back(p5);


  for (vector<Plane>::iterator itPlane = fleet.begin(); itPlane != fleet.end(); itPlane++)
  {
    if (itPlane->GetSeatCount() == itPlane->GetPassengerCount())
    {
      cout << itPlane->GetPassengerCount() << " passengers flying to " <<itPlane->GetDestination() << endl;
    }
  }


}
