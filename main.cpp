#include <iostream>
#include <iomanip>
#include <fstream>
//template array;
using namespace std;

//Josiah Light


int main() {
fout.open("chart.txt");
 int size = 0;
cout << "Date:   Time:   Players:" << endl;
    if (input.is_open()) {
        string line;
        while (getline(input, line)) {
            cout << line << endl;
            ptr[size] = line;
            size++;
        }
        input.close();
  fout.close();
	return 0;
};
  }