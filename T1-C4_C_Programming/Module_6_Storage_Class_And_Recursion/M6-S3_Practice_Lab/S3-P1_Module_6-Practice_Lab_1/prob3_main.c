#include <stdio.h>
#include "prob3_myheader.h"
#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
    #define sleep_ms(ms) Sleep(ms)      // Windows Sleep takes milliseconds
#else
    #include <unistd.h>
    #define sleep_ms(ms) usleep((ms) * 1000) // Linux/macOS usleep takes microseconds
#endif

int one_occ = 0, two_occ = 0, three_occ = 0, four_occ = 0, five_occ = 0, six_occ = 0;

int main(void) {
  for (int i = 0; i < 60; i++) {
    int die_roll = roll_die();
    switch(die_roll) {
      case 1:
      one_occ++;
      break;
      case 2:
      two_occ++;
      break;
      case 3:
      three_occ++;
      break;
      case 4:
      four_occ++;
      break;
      case 5:
      five_occ++;
      break;
      case 6:
      six_occ++;
      break;
    }
    sleep_ms(1000);
  }
  printf("The number of times each face has occured is:\nOne: %d\nTwo: %d\nThree: %d\nFour: %d\nFive: %d\nSix: %d\n", one_occ, two_occ, three_occ, four_occ, five_occ, six_occ);
}

/*Use
gcc -o prob3_combined prob3_roll_die.c prob3_main.c
to compile
and
./prob3_combined
to run.*/