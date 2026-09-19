#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Device {
       int id;
       string name;
       double value;
};
    int main(){
        vector <Device> devices;


        devices.push_back({1, " CPU " , 45.5});
        devices.push_back({2, " Ram " , 60.2});
        devices.push_back({3, " Nhiet do " , 38.0});


        for ( const auto & d : devices ) {
                cout << " ID " << d.id
                     << " | Ten :  " << d.name
                     << " | Gia tri :  " << d.value
                     << endl;  
        }
            return 0;
    }

