// 5. Write a program to find the Area of Triangle

import 'dart:io';

void main(List<String> args) {
  print("Enter Base of triangle:");
  double b = double.parse(stdin.readLineSync()!);

  print("Enter Height:");
  double h = double.parse(stdin.readLineSync()!);

  double area = 0.5 * b * h;

  print("ARea of triangle is $area");
}
