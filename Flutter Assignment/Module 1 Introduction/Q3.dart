// 3. Write a program to make a square and cube of number.

import 'dart:io';

void main(List<String> args) {
  print("Enter Number:");
  int a = int.parse(stdin.readLineSync()!);

  print("Enter Choice 1.Square 2.Cube");
  int c = int.parse(stdin.readLineSync()!);

  if (c == 1) {
    int b = a * a;
    print("Square of $a is:$b");
  } else if (c == 2) {
    int d = a * a * a;
    print("Cube of $a is:$d");
  } else {
    print("Invalid Input");
  }
}
