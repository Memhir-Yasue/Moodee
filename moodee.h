#ifndef MOODEE_H
#define MOODEE_H


#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <ctime>
#include <sstream>

class Moodee
{
std::string m_day;
int m_mood;
double m_hours_slept;
bool m_Sbat;
bool m_breakfast;
bool m_rd_bible;
public:
  std::string setTime()
  {
    time_t curr_time_raw;
    time (&curr_time_raw);
    std::stringstream ss;
    ss << ctime(&curr_time_raw);
    m_day = ss.str();
    return m_day;
  }

  int mood(int mood)
  {
    m_mood = mood;
    return m_mood;
  }

  double sleep(double hours){
    m_hours_slept = hours;
    return m_hours_slept;
  }

  bool S_bat(int pick)
  {
    assert(pick == 1 || pick == 0);
    if(pick == 1) m_Sbat = true;
    else m_Sbat = false;
    return m_Sbat;
  }

  bool breakfast(int pick)
  {
    assert(pick == 1 || pick == 0);
    if(pick == 1) m_breakfast = true;
    else m_breakfast = false;
    return m_breakfast;
  }

  bool rd_bible(int pick)
  {
    assert(pick == 1 || pick == 0);
    if(pick == 1) m_rd_bible = true;
    else m_rd_bible = false;
    return m_rd_bible;
  }

  void print()
  {
    std::cout <<"Time: " << m_day;
    std::cout <<"Mood: " << m_mood <<"/5 \n";
    std::cout <<"Sbat: " << std::boolalpha << m_Sbat<<" \n";
    std::cout <<"breakfast: " << std::boolalpha << m_breakfast<<" \n";
    std::cout <<"Read Bible: " << std::boolalpha << m_rd_bible<<" \n";
  }

  void out(std::string file_name)
  {
    std::ofstream w_file (file_name);
    w_file <<"Time: " << m_day;
    w_file <<"Mood: " << m_mood << std::endl;
    w_file <<"Sbat: " << std::boolalpha << m_Sbat << std::endl;
    w_file <<"breakfast: " << std::boolalpha << m_breakfast << std::endl;
    w_file <<"Read Bible: " << std::boolalpha << m_rd_bible << std::endl;
  }

};

#endif
