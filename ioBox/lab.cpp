#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> // for exit()
#include "nlohmann/json.hpp"
using json = nlohmann::json;

// void jsonfy()
// {
//
// }

void write(json obj) {
  std::ofstream w_file ("json.txt");
  w_file << obj;
}

int main()
{
  json j;
  // j["user"] = {{"YasuE","year"}, {"Sare","year"} };
  // j["user"]["year"] = {2017,2018,2019};

  for (int i = 1; i <= 31; i++) {
    std::string day = std::to_string(i);
    j["data"]["users"]["YasuE"]["2018"]["January"][day] = { {"Question1","user_input"},
                                                    {"Question2","user_input"},
                                                    {"Question3","user_input"},
                                                    {"Question4","user_input"},
                                                    {"Question5","user_input"},
                                                  };
  }

  // j["users"]["YasuE"]["2018"]["January"] = {{"q1","user_input1"},{"q2","user_input1"}};
  // j["users"]["YasuE"]["2018"]["January"] = {{"day2","user_input1"}};
  j["data"]["users"]["YasuE"]["2019"]["Feburary"][5] = { {"Question1","user_input"},
                                                  {"Question2","user_input"},
                                                  {"Question3","user_input"},
                                                  {"Question4","user_input"},
                                                  {"Question5","user_input"},
                                                };

  // j["user"].push_back("foo");
  // j["user"].push_back(1);
  // j["user"].push_back(true);

  std::cout << j <<"\n";
  write(j);

  return 0;
}
