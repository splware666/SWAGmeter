// SWAGMET.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <istream>

int RandWithRange(int min_value, int max_value) {
  return min_value + (std::rand() % (max_value - min_value + 1));
}

int main()
{ 
setlocale(LC_ALL, "Russian");
  srand(time(NULL));

std::cout << "Russian lang? (DON'T TYPE HERE LETTERS)\n";
  std::cout << "0 - NO   1 - YES\n";
  int lang;
std::cin >> lang;
if (lang == 0) 
std::cout << "GO LEARN RUSSIAN (ok I'll add English soon...)\n";
if (lang == 1) 
std::cout << "ЧУВАЧОК ТЫ ЧЕРВЯЧОК\n";
if (lang > 1) 
std::cout << "wtf are you doin\n";
if (lang < 0) 
std::cout << "I said 0 OR 1, not negative value\n";
int z;
std::cout << "ЧУВААК СКИДЫВАЙ ССЫЛКУ НА ВИДЕО ИЛИ ЧО ТЕБЕ УГОДНО\n";
std::cin >> z;
int ZOV = RandWithRange(0,8);
if (ZOV == 0) 
std::cout << "RU : СВАГА 0 ИЗ 8, СВАГА ОТСУТСТВУЕТ\nEN : SWAG 0 OUT OF 8, NO SWAG\n";
if (ZOV == 1) 
std::cout << "RU : СВАГА 1 ИЗ 8, СВАГА МИНИМАЛЬНАЯ\nEN : SWAG 1 OUT OF 8, MINIMUM SWAG\n";
if (ZOV == 2) 
std::cout << "RU : СВАГА 2 ИЗ 8, СВАГА ОЧЕНЬ НИЗКАЯ\nEN : SWAG 2 OUT OF 8, VERY LOW SWAG\n";          
if (ZOV == 3) 
std::cout << "RU : СВАГА 3 ИЗ 8, СВАГА НИЗКАЯ\nEN : SWAG 3 OUT OF 8, LOW SWAG\n";
if (ZOV == 4) 
std::cout << "RU : СВАГА 4 ИЗ 8, СВАГА СРЕДНЯЯ\nEN : SWAG 4 OUT OF 8, AVERAGE SWAG\n";
if (ZOV == 5) 
std::cout << "RU : СВАГА 5 ИЗ 8, СВАГА ВЫШЕ СРЕДНЕГО\nEN : SWAG 5 OUT OF 8, HIGH THAN AVERAGE SWAG\n";
if (ZOV == 6) 
std::cout << "RU : СВАГА 6 ИЗ 8, СВАГА ВЫСОКАЯ\nEN : SWAG 6 OUT OF 8, HIGH SWAG\n";            
if (ZOV == 7) 
std::cout << "RU : СВАГА 7 ИЗ 8, СВАГА ОЧЕНЬ ВЫСОКАЯ\nEN : SWAG 7 OUT OF 8, VERY HIGH SWAG\n";
if (ZOV == 8) 
std::cout << "RU : СВАГА 8 ИЗ 8, СВАГА МАКСИМАЛЬНАЯ\nEN : SWAG 8 OUT OF 8, MAXIMUM SWAG\n";
system("pause");
  }
