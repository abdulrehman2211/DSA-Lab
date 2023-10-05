#include <iostream>
using namespace std;
void printAttendance(char *teacher_name) {
  cout << "Teacher: " << teacher_name << endl;
  cout << "Attendance: Present" << endl;
}

int main() {
  char *teachers[] = {"Yaseem Jana(Cs)","Dr.Muhammad salman(Cs)","Dewan Qaseem(Cs)"};
  char **teacher_pointers = new char *[3];
  for (int i = 0; i < 3; i++) {
    teacher_pointers[i] = teachers[i];
  }
  for (int i = 0; i < 3; i++) {
    printAttendance(teacher_pointers[i]);
  }
  delete[] teacher_pointers;

  return 0;
}
