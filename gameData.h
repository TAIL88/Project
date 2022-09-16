#ifndef GAMEDATA_H_
#define GAMEDATA_H_

#include <iostream>
#include <string>
using namespace std;

class chart
{
public:
    void display_s();
    void setDate(string d);
    void setTimeStamp (string t);
    void setNumOfPlayers (int n);

    string getDate();
    string getTimeStamp();
    int getNumOfPlayers();
protected:
    string date, timeStamp;
    int numOfPlayers;

};
 /*
class time: private chart
{
    public:
    void set_s()
        {
           fout.open("chart.txt"); 
        }
         private: 
        void display_s()
        {
            
   
        }
        input.close();
        }
};

template <class T>
array<T>::array()
{
    mCount = 0;
    mData = new T[mCount];
    for (int i = 0; i < mCount; i++)
        mData[i] = 0;
        void display_p()
}

template <class T>
Array<T>::~Array()
{
    delete[] mData;
}

template <class T>
T & Array<T>::operator[](const int index)
{
    return mData[index];
}
*/

#endif