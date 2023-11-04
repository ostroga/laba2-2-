#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введіть п'ятирозрядне ціле число: ";
    cin >> number;

    
    cin

    int temp1 = number / 10 * 2 - number % 10;
    bool isDivisibleBy12 = (temp1 % 12 == 0);

    

   



    int temp2 = number / 10 - number % 10 * 9;
    bool isDivisibleBy13 = (temp2 % 13 == 0);


    if (isDivisibleBy12) {
        cout << "Число є подільним на 12 за вказаною умовою." << endl;
    } 
   
else {
        cout << "Число не є подільним на 12 за вказаною умовою." << endl;
    }

    if (isDivisibleBy13) {
        cout << "Число є подільним на 13 за вказаною умовою." << endl;
    } else {
        cout << "Число не є подільним на 13 за вказаною умовою." << endl;
    }

    
    }

return 0;
}