#include <iostream>
using namespace std;

int main(){
    int con, chan, ga, cho;
    cin >> con >> chan;
    // Giả sử {con} đều là gà thì có {con}*2 chân gà, vậy thì còn dư ({chân} - {con}*2) chân là số chân gà còn thiếu
    // Có thể coi số chân gà còn lại là số chân chó với mỗi con bị mất 2 chân
    cho = (chan - con * 2) / 2;
    ga = con - cho;
    cout << ga << " " << cho;
}