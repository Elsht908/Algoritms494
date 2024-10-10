#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");

	int opt, x, n;
	char cont;
	do {
		
		
		std::wcout << L"Меню опций:" << std::endl;
		std::wcout << L"[1]. Рассчитать Ряд Маклорена для показательной функции (e^х):" << std::endl;
		std::wcout << L"[2]. Рассчитать Ряд Маклорена для функции натурального логарифма (ln(1+x)):" << std::endl;
		std::wcout << L"[3]. Рассчитать Ряд Маклорена для синусоидальной функции (sin (x)):" << std::endl;
		std::wcout << L"[4]. Рассчитать Ряд Маклорена для функции косинуса (cos (x)):" << std::endl;
		std::wcout << L"[5]. Рассчитать Ряд Маклорена для рациональной функции:" << std::endl;
		cout << "---------------------------------------------------" << endl;
		std::wcout << L"Введите операцию: ";
		cin >> opt;

		do {
			std::wcout << L"Введите x, с модулем меньше 1: ";
			cin >> x;
		} while (opt != 6 and abs(x) > 1);

		do {
			std::wcout << L"Введите n от 2 до 20: ";
			cin >> n;
		} while (n < 2 or n>20);
		
		
		switch (opt) {
			float resul = 0, last = 1;
		
		case 1:
			for (int i = 1; i <= n; i++) {
				last *= x / i;
				resul += last;
			}
			std::wcout << L"Значение функции:" << resul + 1 << std::endl;
			break;
		
		case 2:
			for (int i = 2; i <= n; i++) {
				result += pow(-1, i + 1) * pow(x, i) / i;
				}
			std::wcout << L"Значение функции:" << resul + x << std::endl;
			break;
		
		case 3:
			last = x;
			for (int i = 1; i <= n; i++) {
				last *= -1 * (x * x) / ((2 * i - 1) * (2 * i));
				result += last;
			}
			std::wcout << L"Значение функции:" << resul + x << std::endl;
			break;
		
		case 4:
			last = x
			for (int i = 1; i <= n; i++) {
				last *= -1 * (x * x) / ((2 * i + 1) * (2 * i));
				result += last;
			}
			std::wcout << L"Значение функции:" << resul + 1 << std::endl;
			break;
		
		case 5:
			for (int i = 1; i <= n; i++) {
				last *= (i + 1) * x;
				result += last;
			}
			std::wcout << L"Значение функции:" << resul + 1 << std::endl;
			break;
		
		}

		cout << "\nDo you want continue [Y|N]? " << endl;

		cin >> cont;
	} while (cont == 'y' || cont == 'Y');
	cout << "\n The program is over!" << endl;
	return 0;
}