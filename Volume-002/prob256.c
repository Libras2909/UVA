#include <stdio.h>

int main()
{
  const char *answer_2 = "00\n01\n81\n";
  const char *answer_4 = "0000\n0001\n2025\n3025\n9801\n";
  const char *answer_6 = "000000\n000001\n088209\n494209\n998001\n";
  const char *answer_8 = "00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n";
  const char *answer;
  int n;

  while (scanf("%d", &n) == 1) {
    switch (n) {
      case 2:
        answer = answer_2;

        break;

      case 4:
        answer = answer_4;

        break;

      case 6:
        answer = answer_6;

        break;

      case 8:
        answer = answer_8;

        break;
    }

    printf("%s", answer);
  }

  return 0;
}
