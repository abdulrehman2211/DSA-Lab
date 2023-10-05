#include <iostream>
using namespace std;
struct SatelliteLocation {
  double latitude;
  double longitude;
};
void printLocation(SatelliteLocation *location) {
  cout << "Latitude: " << location->latitude << endl;
  cout << "Longitude: " << location->longitude << endl;
}

int main() {
  SatelliteLocation locations[] = {
      {10.0, 20.0},
      {30.0, 40.0},
      {50.0, 60.0},
  };
  SatelliteLocation **location_pointers = new SatelliteLocation *[3];
  for (int i = 0; i < 3; i++) {
    location_pointers[i] = &locations[i];
  }
  for (int i = 0; i < 3; i++) {
    printLocation(location_pointers[i]);
  }
  delete[] location_pointers;

  return 0;
}
