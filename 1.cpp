#include <iostream>
using namespace std;
int main() {
  int number;
  cout << "Введите число: ";
  cin >> number;
  cout << "Таблица умножения для " << number << ":" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << number << " * " << i << " = " << number * i << endl;
  }
  return 0;
}