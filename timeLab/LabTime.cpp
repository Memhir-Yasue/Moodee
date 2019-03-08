#include <iostream>
#include <ctime>
#include <string>
#include <sstream>

std::string TIME;

std::string setTime()
{
  time_t curr_time_raw;
  time (&curr_time_raw);
  std::stringstream ss;
  ss << ctime(&curr_time_raw);
  TIME = ss.str();
  return TIME;
}

int main(int argc, char const *argv[]) {
  setTime();
  std::cout << TIME << std::endl;
  std::string name = "JOSH";
  std::cout << name;
  return 0;
}
