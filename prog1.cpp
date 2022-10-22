#include <iostream>
using namespace std;
struct inf //Создаём структуру;
{
	string s_name; //Здесь будет хранится информация о фамилии, ..;
	string name; // имени, ..;
	string country; //страны, ..;
	int age; // возраста ..;
	int t_number; // и тел.номера;
};
void correct_number(inf a[], int i) //Функция для корректировки тел.номера;
{
	cout << endl << "Tel.number: ";
	cin >> a[i - 1].t_number;
	cout << endl;
}
void correct_country(inf a[], int i) //Функция для корректировки страны;
{
	cout << endl << "Country: ";
	cin >> a[i - 1].country;
	cout << endl;
}
void show(int i, inf a[]) //Функция для вывода информации о человеке;
{
	i = i - 1;
	cout << endl << "Person " << i + 1 << ".\nName: " << a[i].name << endl << "Second name: " << a[i].s_name << endl << "Country: " << a[i].country << endl << "Age: " << a[i].age << endl << "Tel.number: " << a[i].t_number << endl << endl;
}
int main()
{
	int k = 0, v = 0;
	inf human[5]; //Объявление переменных;
	human[0] = { "Ivanov", "Ivan", "USA", 20, 100009 };
	human[1] = { "D'Ark", "Janna", "France", 17, 200009 };
	human[2] = { "Smith", "Alex", "England", 32, 300009 };
	human[3] = { "Nakamura", "Hiro", "Japan", 13, 400009 };
	human[4] = { "Corteze", "Hulio", "Spain", 26, 500009 }; //Заполнение массива структур;
	do { //Создание цикла для повторного вызова меню;
		k = 0;
		v = 0;
		cout << "1. Correct telephone number\n" << "2. Correct country\n" << "3. Show information\n" << "0. Exit\n" << ">>"; //Интерфейс меню;
		cin >> v; //Выбор пункта меню;
		if (v > 0)
		{
			cout << "Choose person (1..5)>> ";
			cin >> k;
		} //Ввод номера человек;
		else v = 4;
		switch (v) { //Выполнение действия в соответствии с выбором в меню (v);
		case 1: //Вызывает первую функцию;
			correct_number(human, k);
			break;
		case 2: //Вызывает вторую функцию;
			correct_country(human, k);
			break;
		case 3: //Вызывает третью функию;
			show(k, human);
			break;
		default: //При вводе некорректного числа только выводит сообщение "Incorrect number";
			if (v |= 0) cout << "Incorrect number";
			break;
		}
	} while (v |= 0);
}
