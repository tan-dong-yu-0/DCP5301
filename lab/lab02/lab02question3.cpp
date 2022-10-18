#include <iostream>
#include <string>

class BMI {
public:
  BMI() {
    height = 1.0;
    weight = 1.0;
  };
  void set(float height, float weight) {
    this->height = height;
    this->weight = weight;
  };
  void calculate() { bmi = weight / (height * height); };
  void display() {
    std::string weight;
    std::cout << "Your bmi is: " << bmi << std::endl;
    if (bmi < 18.5) {
      weight = "Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
      weight = "Normal";
    } else if (bmi >= 25 && bmi <= 29.9) {
      weight = "Overweight";
    } else if (bmi >= 29.9) {
      weight = "Obese";
    }
    std::cout << "You are " << weight << "." << std::endl;
  };

private:
  float height, weight, bmi;
};

int main(int argc, char *argv[]) {

  BMI bmi;
  float height, weight;

  std::cout << "This program will calculate your body mass index." << std::endl;

  std::cout << "Enter your height in meter(m) unit: ";
  std::cin >> height;

  std::cout << "Enter your weight in kilogram(kg) unit: ";
  std::cin >> weight;

  bmi.set(height, weight);
  bmi.calculate();
  bmi.display();

  return 0;
}
