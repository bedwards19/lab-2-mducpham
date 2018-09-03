#include <iostream>

using namespace std;

float update_speed(float longitude, float latitude) {
    return longitude/(latitude) + 1;
}

int main() {
    float longitude = 1.0f;
    float latitude = 1.0f;

    float speed = 1.0f;

    for (int i = 0; i < 1000; ++i) {
        speed = update_speed(longitude, latitude);
        longitude = longitude + speed;
        latitude  = latitude  + speed;
    }

    cout << "Final coordinates are (" << longitude << "," << latitude << ")" << endl;
    return 0;
}
