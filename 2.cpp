#include <iostream>
using namespace std;
int main() {
  double rub, euro, dollar;
  int choice;
  cout << "Введите сумму в рублях: ";
  cin >> rub;
  cout << "Выберите валюту для конвертации:" << endl;
  cout << "1. Евро" << endl;
  cout << "2. Доллар" << endl;
  cout << "Введите номер валюты: ";
  cin >> choice;
  euro = 0.0094; // примерный курс рубля к евро
  dollar = 0.0104; // примерный курс рубля к доллару
  if (choice == 1) {
    double conv = rub * euro;
    cout << rub << " рублей = " << conv << " евро" << endl;
  } else if (choice == 2) {
    double conv = rub * dollar;
    cout << rub << " рублей = " << conv << " долларов" << endl;
  } else {
    cout << "Неверный выбор." << endl;
  }
  return 0;
}
