
#include "moodee.h"

int main() {
  Moodee me;
  me.setTime();
  me.breakfast(1);
  me.S_bat(1);
  me.mood(2);
  me.sleep(2);
  me.rd_bible(0);
  me.print();
  me.out("inputs.txt");
  return 0;
}
