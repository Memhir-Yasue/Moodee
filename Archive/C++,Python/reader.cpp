#include <iostream>
#include <fstream>

void read() {
  std::ifstream r_file("input.txt");
  if(!r_file){
    std::cerr <<"Read err\nNo file found!"<<std::endl;
    exit(1);
  }
  while(r_file)
  {
    std::string strInput;
    r_file >> strInput;
    std::getline(r_file, strInput);
    std::cout << strInput << std::endl;
  }
}

// void out(std::string file_name)
//   {
//     std::ofstream w_file (file_name);
//     w_file <<"Time: " << m_day << std::endl;
//     w_file <<"Mood: " << m_mood << std::endl;
//     w_file <<"Sbat: " << std::boolalpha << m_Sbat << std::endl;
//     w_file <<"breakfast: " << std::boolalpha << m_breakfast << std::endl;
//     w_file <<"Read Bible: " << std::boolalpha << m_rd_bible << std::endl;
//   }


int main() {
  read();
  return 0;
}
