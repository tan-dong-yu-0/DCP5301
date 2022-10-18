#include <iostream>

int main(int argc, char *argv[]) {
  class Box {
  public:
    Box(){};
    float length, breadth, height;

    float Volume(float length, float breadth, float height) {
      int vol;
      vol = length * breadth * height;
      return vol;
    }
  };

  Box Box1, Box2;

  std::cout << "Volume of Box 1: " << Box1.Volume(5.0, 6.0, 7.0)  << std::endl;
  std::cout << "Volume of Box 2: " << Box2.Volume(10.0, 12.0, 13.0)  << std::endl;
  
  return 0;
}
