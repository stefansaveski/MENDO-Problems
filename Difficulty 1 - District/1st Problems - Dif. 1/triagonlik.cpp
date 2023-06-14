//https://mendo.mk/Task.do?id=782
#include <iostream>
using namespace std;
int main()
{
    int broja[3], min, denariBrojac = 0, razlika = 0, razlika1 = 0;
    for (int i = 0; i < 3; i++) {
        cin >> broja[i];
    }
    for (int j = 0; j < 3; j++) {
        for (int i = j; i < 3; i++) {
            if (broja[j] >= broja[i])
            {
            }
            else
            {
                min = broja[i];
                broja[i] = broja[j];
                broja[j] = min;
            }
        }
    }
    if (broja[2] == broja[1] && broja[2] == broja[0]) 
    {
    }
    else if (broja[0] == broja[1] && broja[1] > broja[2]) {
        razlika = broja[1] - broja[2];
            while (razlika != 0) {
                razlika -= 1;
                denariBrojac += 10;
        }
    }
    else if (broja[0] > broja[1] && broja[1] == broja[2]) {
        razlika = broja[0] - broja[1];
        while (razlika != 0) {
            razlika -= 1;
            denariBrojac += 10;
        }
    }
    else {
        razlika = broja[0] - broja[1];
        razlika1 = broja[1] - broja[2];
        while (razlika != 0) {
                denariBrojac += 10;
                razlika -= 1;
        }
        while (razlika1 != 0){
                denariBrojac += 10;
                razlika1 -= 1;
        }
    }
    cout << denariBrojac;
}