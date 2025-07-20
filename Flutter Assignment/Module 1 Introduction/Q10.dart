//Write a Program to check the given number is Positive,
//Negative.

import 'dart:io';

void main(List<String> args) {
  print("Enter Number:");
  int a = int.parse(stdin.readLineSync()!);

  if (a > 0) {
    print("Positive");
  } else {
    print("Negative");
  }
}
