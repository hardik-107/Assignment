//Write a program to find the simple Interest.
//si=p*r*t/100

import 'dart:io';

void main(List<String> args) {
  print("Enter Principal:");
  int p = int.parse(stdin.readLineSync()!);
  print("Enter Rate:");
  int r = int.parse(stdin.readLineSync()!);

  print("Enter time:");
  int t = int.parse(stdin.readLineSync()!);

  int k = p * r * t;
  int SI = k ~/ 100;

  print('Your Simple Interest is:$SI');
}
