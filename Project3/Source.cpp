//Завдання 1


//#include <iostream>
//using namespace std;
//void main() {
//	setlocale(0, "rus");
//	cout << "Продаються чистокровные щеночки" << endl;
//	cout << "Порода: Йоркширский терьер" << endl;
//	cout << "Три мальчика, родились 25.02.2021г" << endl;
//	cout << "Щенки очень добрые, умные,игривые,ласковые.К пеленке приучены, проглистованые." << endl;
//	cout << "------------------------------------------------------------------------------" << endl;
//	cout << "Больше информации по телефону: +380976131660" << endl;
//	system("pause");
//}


//Завдання 2



//#include <iostream>
//using namespace std; 
//void main() {
//	setlocale(0, "rus");
//	double R1 = 0;
//	double R2 = 0;
//	double R3 = 0;
//	double R0 = 0;
//	cout << "введите сопротивление R1 - ";
//	cin >> R1;
//	cout << "введите сопротивление R2 - ";
//	cin >> R2;
//	cout << "введите сопротивление R3 - ";
//	cin >> R3;
//	R0 = 1 / ( 1 / R1 + 1 / R2 + 1 / R3);
//	cout <<"сопротивление R0  равно - " << R0 << endl;
//	system("pause");
//
//}


//Завдання 3


//#include <iostream>
//using namespace std; 
//void main() {
//	setlocale(0, "rus");
//	double L = 0;
//	double R = 0;
//	double pi = 3.14;
//	double S = 0;
//	cout << "введите длину окружности - ";
//	cin >> L;
//	R = L / (2 * pi);
//	cout <<"радиус окружности равен - " << R << endl;
//	S = pi * R * R;
//	cout << "площа окружности = " << S << endl;
//	system("pause");
//
//}



//Завдання 4


//#include <iostream>
//using namespace std;
//void main() {
//	setlocale(0, "rus");
//	double chislo1 = 0;
//	double chislo2 = 0;
//	double serednearefmet = 0;
//	cout << "введите число 1 - ";
//	cin >> chislo1;
//	cout << "введите число 2 - ";
//	cin >> chislo2;
//	serednearefmet = (chislo1 + chislo2) / 2;
//	cout << "среднее арефметичиское равно - " << serednearefmet << endl;
//
//	system("pause");
//
//}


//Завдання 5

//#include <iostream>
//using namespace std;
//void main() {
//	setlocale(0, "rus");
//	double chp = 0;
//	double mp = 0;
//	double sp = 0;
//	double chk = 0;
//	double mk = 0;
//	double sk = 0;
//	double vremyarozmovu = 0;
//	double cinak = 0;
//	double cinag = 0;
//	cout << "введите время начала телефонного разговора :" << endl;
//	cout << "часы - ";
//	cin >> chp;
//	cout << "минуты - ";
//	cin >> mp;
//	cout << "секунды - ";
//	cin >> sp;
//	cout << "введите время конца телефонного разговора :" << endl;
//	cout << "часы - ";
//	cin >> chk;
//	cout << "минуты - ";
//	cin >> mk;
//	cout << "секунды - ";
//	cin >> sk;
//	vremyarozmovu = (chk - chp) * 3600 + (mk - mp) * 60 + (sk - sp);
//	cout << "время разговора в секундах - " << vremyarozmovu << " секунд" << endl;
//	cinak = (vremyarozmovu / 60) * 30 ;
//	cout << "стоимость телефонного розговора в копейках - " << cinak << " копеек"<< endl;
//	cinag = cinak / 100;
//	cout << "стоимость телефонного разговора в гривнах - " << cinag << " гривен" << endl;
//	system("pause");
//
//}