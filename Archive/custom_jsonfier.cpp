// #include "moodee.h"
#include <iostream>
#include <string>
#include <fstream>

// void jsonify()
// {
//   std::cout << " \"{\" " << date << ":[" '\n';
//   std::cout << "  { \"" << mod <<", \"" << ":" << "\"\""
// }

std::string USER = "User";

std::string NAME = "Josh";

std::string MOOD = "Mood";
int m_mood = 3;

std::string SLEEP = "Sleep";
double m_sleep = 8.25;

std::string FOOD = "Food";
bool m_food = true;

void print_jsonfy()
{
  std::cout << "{\n";
  std::cout <<  "  \""<<USER<<"\": \n";
  std::cout <<    "   {\n";

  std::cout <<    "     \""<<NAME<<"\": [ \n";
  std::cout <<    "       {\n";
  std::cout <<      "         \""<<MOOD<<"\": \""<<m_mood<<"\", \n";
  std::cout <<      "         \""<<SLEEP<<"\": \""<<m_sleep<<"\", \n";
  std::cout <<      "         \""<<FOOD<<"\": \""<<m_food<<"\" \n";
  std::cout <<    "       }\n"; // insert comma to add a new entry to current name
  std::cout <<    "     ]\n"; // insert comma to add a new NAME

  std::cout <<    "   } \n"; //
  std::cout << "} \n";
}


void write_jsonfy()
{
  std::ofstream outjson ("json.txt");
  outjson << "{\n";
  outjson <<  "  \""<<USER<<"\": \n";
  outjson <<    "   {\n";

  outjson <<    "     \""<<NAME<<"\": [ \n";
  outjson <<    "       {\n";
  outjson <<      "         \""<<MOOD<<"\": \""<<m_mood<<"\", \n";
  outjson <<      "         \""<<SLEEP<<"\": \""<<m_sleep<<"\", \n";
  outjson <<      "         \""<<FOOD<<"\": \""<<m_food<<"\" \n";
  outjson <<    "       }\n"; // insert comma to add a new entry to current name
  outjson <<    "     ]\n"; // insert comma to add a new NAME

  outjson <<    "   } \n"; //
  outjson << "} \n";
}

//
int main(int argc, char const *argv[]) {
  write_jsonfy();
  print_jsonfy();
  return 0;
}
