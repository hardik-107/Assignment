//Write a program to print the number in reverse 
//order.

import 'dart:io';



void main() {
  stdout.write("Enter a number: ");
  int num = int.parse(stdin.readLineSync()!);
  int rev = 0;

  while (num != 0) {
    rev = rev * 10 + num % 10;
    num ~/= 10;
  }

  print("Reversed number: $rev");
}
