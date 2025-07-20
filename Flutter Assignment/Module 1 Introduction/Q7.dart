//7. Write a program to convert temperature from degree
//   centigrade to Fahrenheit. f=(c*1.8)+32

import 'dart:io';

void main(List<String> args) {
  print('Enter Temperature:');
  double t = double.parse(stdin.readLineSync()!);

  double c = 1.8 * t;
  double f = c + 32;
  print("The temperature in faremheit is :$f");
}
