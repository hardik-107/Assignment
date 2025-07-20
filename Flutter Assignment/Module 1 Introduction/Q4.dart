//4. Write a program to find the Area of Circle

import 'dart:io';

void main(List<String> args) {
  print("Enter Radius:");
  int r = int.parse(stdin.readLineSync()!);

  double pi = 2.14;

  double area = pi * r * r;
  print("Area of Cicle is:$area");
}
