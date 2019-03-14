void write() {
  std::ofstream w_file ("test.txt");
  // w_file << "hiii";
}

void read() {
  std::ifstream r_file("test.txt");
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
