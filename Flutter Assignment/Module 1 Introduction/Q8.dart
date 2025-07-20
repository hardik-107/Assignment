//Write a program to calculate sum of 5 subjects
//& find the percentage. Subject marks entered
//by user.

import 'dart:io';

void main(List<String> args) {
  print('English');
  int a = int.parse(stdin.readLineSync()!);
  print('Maths');
  int b = int.parse(stdin.readLineSync()!);
  print('Science');
  int c = int.parse(stdin.readLineSync()!);
  print('Hindi');
  int d = int.parse(stdin.readLineSync()!);
  print('Gujarati');
  int e = int.parse(stdin.readLineSync()!);
  int total = a + b + c + d + e;
  print("The total marks are:$total");

  int t1 = total ~/ 500;
  int per = t1 * 100;

  print("Your percentage is:$per");
}
