#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> // for exit()
#include "nlohmann/json.hpp"
using json = nlohmann::json;

void write(json obj) {
  std::ofstream w_file ("json.txt");
  w_file << obj;
}

void print(json obj) {
  std::cout << obj <<std::endl;
}

int main()
{

  /*
    The stuff down below is working.
    Testing by having two differente user-names as well as differente days of the month

    CAN BE PARSED IN PYTHON!

  */
  json j;

  for (int i = 1; i <= 31; i++) {
    std::string day = std::to_string(i);
    j["data"]["users"]["YasuE"]["2018"]["January"][day] = { {"Question1","user_input"},
                                                    {"Question2","user_input"},
                                                    {"Question3","user_input"},
                                                    {"Question4","user_input"},
                                                    {"Question5","user_input"},
                                                  };
  }


  j["data"]["users"]["SARA"]["2019"]["Feburary"][5] = { {"Question1","user_input"},
                                                  {"Question2","user_input"},
                                                  {"Question3","user_input"},
                                                  {"Question4","user_input"},
                                                  {"Question5","user_input"},
                                                };
  write(j);
  return 0;
}
