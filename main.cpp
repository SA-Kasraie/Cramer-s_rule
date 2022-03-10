///////////////////////CRAMER'S_RULE_3_EQUATION_SYSTEM///////////////////////
#include <iostream>

using std:: cout;
using std:: cin;

int main() {

  std::ios::sync_with_stdio(false);

  long double num[22];

  int i;

  cout << "==================================\n-Cramer's_Rule: "
          "3_Equation_System\n\n> a0x + a1y + a2z = a3\n> a4x "
          "+ a5y + a6z = a7\n> a8x + a9y + a10z = a11\n";

  for (i = 0; i <= 11; ++i) {

      cout << "\n-ENTER_a" << i << ": ";

      cin >> num[i];

      if (i == 11) {

          num[12] = (num[5] * num[10]) - (num[9] * num[6]);

          num[13] = (num[6] * num[8]) - (num[10] * num[4]);

          num[14] = (num[4] * num[9]) - (num[8] * num[5]);

          num[15] = (num[6] * num[11]) - (num[10] * num[7]);

          num[16] = (num[7] * num[9]) - (num[11] * num[5]);

          num[17] = (num[4] * num[11]) - (num[8] * num[7]);

          num[18] = (num[0] * num[12]) + (num[1] * num[13])
                    + (num[2] * num[14]); /// D

          num[19] = (num[3] * num[12]) + (num[1] * num[15])
                    + (num[2] * num[16]); /// Dx

          num[20] = -(num[0] * num[15]) + (num[3] * num[13])
                    + (num[2] * num[17]); /// Dy

          num[21] = -(num[0] * num[16]) - (num[1] * num[17])
                    + (num[3] * num[14]); /// Dz

          cout << '\n';

          cout << "X: " << num[19] / num[18] << '\n';

          cout << "Y: " << num[20] / num[18] << '\n';

          cout << "Z: " << num[21] / num[18] << '\n';

          cout << "\n-ENTER_'0'_TO-QUIT_IF-NOT_ENTER_ANY_NUMBER_TO_TRY_"
                  "AGAIN\n\n-ENTER: ";

          cin >> i;

          if (!i) {

              cout << "\n==================================\n=\tEND_OF_"
                      "PROGRAM\t\t =\n==================================\n";

              break;

            }

          cout << "\n-----\n> a0x + a1y + a2z = a3\n> a4x "
                  "+ a5y + a6z = a7\n> a8x + a9y + a10z = a11\n";
          i = -1;

        }

    }

  return 0;
}
