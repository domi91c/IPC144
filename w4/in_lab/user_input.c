/* ws4 */
/* user_input.h */

#include <stdio.h>

struct Student {
  int student_id;
  int mark;
};

int main() {
  int students, i;
  struct Student std[40];
  int passCount = 0, passSum = 0;
  int failCount = 0, failSum = 0;
  float passAvg, failAvg, markAvg;
  int markSum = 0;
  int highest = 0, lowest = 100;


  printf("       ---=== IPC mark Analyser V2.0 ===---\n");
  printf("Please enter the number of students(between 3 and 40): ");

  do {
    scanf("%i", &students);
    if (students < 3 || students > 40) {
      printf("Invalid number, enter a number between 3 and 40 inclusive: ");
    }
  } while (students < 3 || students > 40);


  printf("Row    Std No   Mrk\n");
  printf("--- ---------   ---\n");
  for (i = 0; i < students; i++) {
    printf("    _________   ___\r%3d ", i + 1);
    scanf("%i", &std[i].mark);
    while (std[i].mark < 0 || std[i].mark > 100) {
      printf("Error: Enter values between 0 and 100 inclusive.\n");
      scanf("%9i%i", &std[i].student_id, &std[i].mark);
    }

  }
  return 0;

}

