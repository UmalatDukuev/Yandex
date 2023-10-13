#pragma warning(disable : 4996)

//#include <iostream>
//#include <string>
//int main() {
//	
//
//	//const int n = 12;
//	//int month[n + 1];
//	//month[0] = 0;
//	//month[1] = 31;//jan=31
//	//month[2] = 28;//feb=28,
//	//month[3] = 31;//mar=31
//	//month[4] = 31;//apr=31
//	//month[5] = 31;//may=31
//	//month[6] = 30;//jun=30
//	//month[7] = 31;//jul=31
//	//month[8] = 31;//aug=31
//	//month[9] = 30;//sep=30
//	//month[10] = 31;//oct=31
//	//month[11] = 30;//nov=30
//	//month[12] = 31;//dec=31;
//	//int mas[6][2] = { 0 };
//	int year1 = 0, month1 = 0, day1 = 0, hour1 = 0, min1 = 0, sec1 = 0;
//	int year2 = 0, month2 = 0, day2 = 0, hour2 = 0, min2 = 0, sec2 = 0;
//	int yeardiff = 0, monthdiff = 0, daydiff = 0, hourdiff = 0, mindiff = 0, secdiff = 0;
//
//	std::cin >> year1 >> month1 >> day1 >> hour1 >> min1 >> sec1;
//	std::cin >> year2 >> month2 >> day2 >> hour2 >> min2 >> sec2;
//
//	yeardiff = year2 - year1;
//	monthdiff = month2 - month1;
//	daydiff = day2 - day1;
//	hourdiff = hour2 - hour1;
//	mindiff = min2 - min1;	
//	secdiff = sec2 - sec1;
//
//	if (month2 < month1)
//		yeardiff -= 1;
//	if (day2 < day1)
//		monthdiff -= 1;
//	if (hour2 < hour1)
//		daydiff -= 1;
//	if (min2 < min1)
//		hourdiff -= 1;
//	if (sec2 < sec1)
//		mindiff -= 1;
//	std::cout << yeardiff << monthdiff << daydiff << hourdiff << mindiff << secdiff;
//
//
//
//	//int result = 0;
//	//result = yeardiff * 365 * 24 * 60 * 60 + monthdiff * 31 * 24 * 60 * 60 + daydiff * 24 * 60 * 60 + hourdiff * 60 * 60 + mindiff * 60 + secdiff;
//	//int resultstart = year1 * 365 * 24 * 60 * 60 + month1 * 30 * 24 * 60 * 60 + day1 * 24 * 60 * 60 + hour1 * 60 * 60 + min1* 60 + sec1;	
//	//int resultend = year2 * 365 * 24 * 60 * 60 + month2 * 30 * 24 * 60 * 60 + day2 * 24 * 60 * 60 + hour2 * 60 * 60 + min2 * 60 + sec2;
//	//int days = (resultend - resultstart) / 84600;
//	//std::cout << days;
//
//	return 0;
//
//}


//#include <iostream>
//#include <ctime>
//
//int main()
//{
//
//    int year1 = 0, month1 = 0, day1 = 0, hour1 = 0, min1 = 0, sec1 = 0;
//	int year2 = 0, month2 = 0, day2 = 0, hour2 = 0, min2 = 0, sec2 = 0;
//	int yeardiff = 0, monthdiff = 0, daydiff = 0, hourdiff = 0, mindiff = 0, secdiff = 0;
//
//	std::cin >> year1 >> month1 >> day1 >> hour1 >> min1 >> sec1;
//	std::cin >> year2 >> month2 >> day2 >> hour2 >> min2 >> sec2;
//
//
//    struct std::tm a = { sec1 ,min1 ,hour1 ,day1, month1-1 , 105 }; /* June 24, 2004 */
//    struct std::tm b = { sec2 ,min2 ,hour2 ,day2, month2-1 , 105 }; /* July 5, 2004 */
//
//    std::time_t x = std::mktime(&a);
//    std::time_t y = std::mktime(&b);
//
//    if (x != (std::time_t)(-1) && y != (std::time_t)(-1))
//    {
//        std::cout << 1;
//        int difference = std::difftime(y, x) / (60 * 60 * 24);
//        int sec = std::difftime(y, x);
//        sec = sec % 86400;
//        std::cout << std::ctime(&x);
//        std::cout << std::ctime(&y);
//        std::cout << difference << " " << sec;
//    }
//
//    return 0;
//}

/*

1981 2 12 10 30 1
1981 3 1 10 31 37


2001 5 20 14 15 16
9009 9 11 12 21 11

*/


#include <iostream>
#include <chrono>

int main() {
 //   // Создаем две даты
 //   std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
 //   std::chrono::system_clock::time_point end = std::chrono::system_clock::now() + std::chrono::hours(24);

 //   int year1 = 0, month1 = 0, day1 = 0, hour1 = 0, min1 = 0, sec1 = 0;
	//int year2 = 0, month2 = 0, day2 = 0, hour2 = 0, min2 = 0, sec2 = 0;
	//int yeardiff = 0, monthdiff = 0, daydiff = 0, hourdiff = 0, mindiff = 0, secdiff = 0;

	//std::cin >> year1 >> month1 >> day1 >> hour1 >> min1 >> sec1;
	//std::cin >> year2 >> month2 >> day2 >> hour2 >> min2 >> sec2;

 //   std::chrono::system_clock::time_point customTime =
 //       std::chrono::system_clock::time_point{ 
 //           std::chrono::years(year1) + std::chrono::months(min1) +
 //           std::chrono::days(sec1)+
 //           std::chrono::hours(hour1) + std::chrono::minutes(min1) +
 //           std::chrono::seconds(sec1)
 //   };
 //   // Находим разницу между датами
 //   auto duration = end - start;
 //   auto days = std::chrono::duration_cast<std::chrono::hours>(duration).count() / 24;

 //   std::cout << "Количество дней: " << days << std::endl;

    return 0;
}