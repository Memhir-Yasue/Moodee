#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <chrono>
#include <ctime>

class Mood
{
std::string m_day;
int m_mood;
bool m_Sbat;
bool m_breakfast;
bool m_rd_bible;
std::string m_hours_slept;

void setTime()
{
  time_t curr_time_raw;
  time (&curr_time_raw);
  m_day = ctime(&curr_time_raw);
}

void mood()
{
  int mood;
  std::cin >> mood;
  m_mood = mood;
}

void S_bat()
{
  int pick;
  std::cin >> pick;
  assert(pick == 1 || pick == 0);
  m_Sbat = pick;
  if(pick == 1) m_Sbat = true;
  else m_Sbat = false;
}

void breakfast()
{
  int pick;
  std::cin >> pick;
  assert(pick == 1 || pick == 0);
  if(pick == 1) m_breakfast = true;
  else m_breakfast = false;
}

void rd_bible()
{
  int pick;
  std::cin >> pick;
  assert(pick == 1 || pick == 0);
  if(pick == 1) m_rd_bible = true;
  else m_rd_bible = false;
}


void print()
{
  std::cout <<"Time: " << m_day;
  std::cout <<"Mood: " << m_mood <<"/5 \n";
  std::cout <<"Sbat: " << std::boolalpha << m_Sbat<<" \n";
  std::cout <<"breakfast: " << std::boolalpha << m_breakfast<<" \n";
  std::cout <<"Read Bible: " << std::boolalpha << m_rd_bible<<" \n";
}

public:

  void crun()
  {
    setTime();
    std::cout <<"Enter mood out of 5: \n";
    mood();
    std::cout <<"S_bat? yes or no (1 or 0) \n";
    S_bat();
    std::cout <<"Ate breakfast? yes or no (1 or 0) \n";
    breakfast();
    std::cout <<"Read Bible? yes or no (1 or 0) \n";
    rd_bible();
    print();
  }

};

class ojson
{
  // get user input
  // store into JSON type format
};

int main()
{
  Mood me;
  me.crun();
  // crun(me);

  return 0;
}
