#include <iostream>

using namespace std;

class DateIs {

private:
	int year, day, month;
	string name, monthS, dayS;

public:
	DateIs(string name, int year, int month, int day) {

		if (month == 0 || month >= 13 || day == 0 || day >= 8) {
			cout << "Error created." << endl << "Enter: month (1-12), and day (1-7)!" << endl;
		}else {

		this->name = name;
		this->year = year;
		this->month = month;
		this->day = day;
		
			switch (month) {
			case 1: monthS = "January"; break;
			case 2: monthS = "February"; break;
			case 3: monthS = "Match"; break;
			case 4: monthS = "April"; break;
			case 5: monthS = "May"; break;
			case 6: monthS = "June"; break;
			case 7: monthS = "Jully"; break;
			case 8: monthS = "August"; break;
			case 9: monthS = "September"; break;
			case 10: monthS = "October"; break;
			case 11: monthS = "November"; break;
			case 12: monthS = "December"; break;
			default: cout << "error!"; break;
		}

			switch (day) {
			case 1: dayS = "Monday"; break;
			case 2: dayS = "Tuesday"; break;
			case 3: dayS = "Wednesday"; break;
			case 4: dayS = "Thursday"; break;
			case 5: dayS = "Friday"; break;
			case 6: dayS = "Saturday"; break;
			case 7: dayS = "Sunday"; break;
			default: cout << "error!"; break;
		}
		cout << "Created new Date is: name = " << name<< " : " << year << "." << month << "." << day << endl;
		}
	}

	void setNewYear(DateIs Datas) {
		if (Datas.month == 0 || Datas.month >= 13 || Datas.day == 0 || Datas.day >= 8) {
			cout << "Error created." << endl;
		}
		else {
			cout << Datas.name << " last year is: " << Datas.year << endl;
			Datas.year += 1;
			cout << Datas.name << " new year is: " << Datas.year << endl;
			this->year = Datas.year;
		}
	}
	void setNewMonth(DateIs DateIs) {
		if (DateIs.month == 0 || DateIs.month >= 13 || DateIs.day == 0 || DateIs.day >= 8) {
			cout << "Error created." << endl;
		}
		else {
			cout << DateIs.name << " last month is: " << DateIs.monthS << endl;
			DateIs.month += 1;
			cout << DateIs.month;
			if (DateIs.month == 13) { DateIs.month = 1;
			switch (DateIs.month) {
			case 1: DateIs.monthS = "January"; break;
			case 2: DateIs.monthS = "February"; break;
			case 3: DateIs.monthS = "Match"; break;
			case 4: DateIs.monthS = "April"; break;
			case 5:DateIs.monthS = "May"; break;
			case 6: DateIs.monthS = "June"; break;
			case 7: DateIs.monthS = "Jully"; break;
			case 8: DateIs.monthS = "August"; break;
			case 9: DateIs.monthS = "September"; break;
			case 10: DateIs.monthS = "October"; break;
			case 11: DateIs.monthS = "November"; break;
			case 12: DateIs.monthS = "December"; break;
			default: cout << "error!"; break;
			}
			}else{ cout << "error";
			}
			cout << DateIs.name << " new month is: " << DateIs.monthS << endl;
			this->month = DateIs.month;
			this->monthS = DateIs.monthS;
		}
	}
		void setNewDay(DateIs Data) {
			if (Data.month == 0 || Data.month >= 13 || Data.day == 0 || Data.day >= 8) {
				cout << "Error created." << endl;
			}
			else {
				cout << Data.name << " last day is: " << Data.dayS << endl;
				Data. day += 1;
				if (Data.day == 8) { Data.day = 1; };
				switch (Data.day) {
				case 1: Data.dayS = "Monday"; break;
				case 2: Data.dayS = "Tuesday"; break;
				case 3: Data.dayS = "Wednesday"; break;
				case 4: Data.dayS = "Thursday"; break;
				case 5: Data.dayS = "Friday"; break;
				case 6: Data.dayS = "Saturday"; break;
				case 7: Data.dayS = "Sunday"; break;
				default: cout << "error!"; break;
				}
				cout << Data.name << " new day is: " << Data.dayS << endl;
				this->day = Data.day;
				this->dayS = Data.dayS;
			}
		}

		void printDate(DateIs Date) {
			if (Date.month == 0 || Date.month >= 13 || Date.day == 0 || Date.day >= 8) {
				cout << "Error created." << endl;
			}
			else {
				cout << Date.name << " is: " << Date.year << "." << Date.month <<"("<< Date.monthS << ")" << "." << Date.day<<"(" << dayS << ")" << endl;
			}
		}
		
	};
int main() {
	DateIs today("today", 2022, 0, 0);
	today.printDate(today);
	today.setNewDay(today);
	cout << "-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
	DateIs tomorrow("Tomorrow", 2023, 12, 7);
	tomorrow.printDate(tomorrow);
	tomorrow.setNewYear(tomorrow);
	tomorrow.setNewMonth(tomorrow);
	tomorrow.setNewDay(tomorrow);
	tomorrow.printDate(tomorrow);
}
