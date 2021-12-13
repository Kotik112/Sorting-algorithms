#include <stdio.h>

typedef enum {ENTER_1ST, ENTER_2ND, ENTER_3RD, ENTER_4TH, OPEN} state;

static const char secret[] = {'1', '2', '3', '4'};

int main(void) {

  state current_state = ENTER_1ST;
  while (1) {
    switch (current_state) {

    case ENTER_1ST:
      printf("Enter pin\n");
      if (getchar() == secret[0])
        current_state = ENTER_2ND;
      getchar();
      break;

    case ENTER_2ND:
      if (getchar() == secret[1]) {
        current_state = ENTER_3RD;
      } else
        current_state = ENTER_1ST;
      getchar();
      break;

    case ENTER_3RD:
      if (getchar() == secret[2]) {
        current_state = ENTER_4TH;
      } else
        current_state = ENTER_1ST;
      getchar();
      break;

    case ENTER_4TH:
      if (getchar() == secret[3]) {
        current_state = OPEN;
      } else
        current_state = ENTER_1ST;
      getchar();
      break;
      
    case OPEN:
      printf("Door opened! Press a key to close it\n");
      getchar();
      current_state = ENTER_1ST;
    }
  }
  return 0;
}