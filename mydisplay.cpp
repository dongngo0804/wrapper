#include <stdio.h> // Include the main C/C++ program
#include "mydisplay.h"
#include "mydisplayopencv.cpp"

void Display::do_display() {
  initiate_display(); // Calls the function "initiate_capture()" in main_capture.cpp
  printf("wrapped!");
}

int Display::do_math(int a, int b){
  return (a+b);
}
