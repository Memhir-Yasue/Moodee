#ifndef MOODEE_H
#define MOODEE_H


#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <ctime>
#include <sstream>
#include <regex>



class Moodee
{
std::string m_day;
std::string m_name;
int m_mood;
double m_hours_slept;
bool m_Sbat;
bool m_breakfast;
bool m_rd_bible;
std::string msg;

public:
  std::string setTime() // create a constructor to initalize this automatically
  {
    time_t curr_time_raw;
    time (&curr_time_raw);
    std::stringstream ss;
    ss << ctime(&curr_time_raw);
    m_day = ss.str();
    /*
      The ctime function produces an extra white spaces between the month and day
    */
    std::regex search("[' ']{2,}");
    m_day =  std::regex_replace(m_day, search, " ");
    return m_day;
  }

  std::string name(std::string name_)
  {
    m_name = name_;
    return m_name;
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

  std::string note(std::string short_message)
  {
    msg = short_message;
    return msg;
  }

  void print()
  {
    std::cout <<"Time: " << m_day;
    std::cout <<"Name: " << m_name <<"\n";
    std::cout <<"Mood: " << m_mood <<"/5 \n";
    std::cout <<"Sbat: " << std::boolalpha << m_Sbat<<" \n";
    std::cout <<"Breakfast: " << std::boolalpha << m_breakfast<<" \n";
    std::cout <<"Bible: " << std::boolalpha << m_rd_bible<<" \n";
    std::cout <<"Note: " << msg <<"\n\n";
  }

  void out(std::string file_name)
  {
    std::ofstream w_file (file_name,std::ios::app);
    w_file <<"Time: " << m_day;
    w_file <<"Name: " << m_name << std::endl;
    w_file <<"Mood: " << m_mood << std::endl;
    w_file <<"Sbat: " << std::boolalpha << m_Sbat << std::endl;
    w_file <<"Breakfast: " << std::boolalpha << m_breakfast << std::endl;
    w_file <<"Note: " << msg << "\n\n" << std::endl;
  }

};

#endif
