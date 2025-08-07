//Write a Program to check the given number is prime or not 
//prime.

import 'dart:io';

void main(List<String> args) {
  
  int num = 7; // change this to any number

  if (num <= 1) {
    print('$num is not a prime number.');
  } else {
    int count = 0;
    for (int i = 1; i <= num; i++) {
      if (num % i == 0) {
        count++;
      }
    }

    if (count == 2) {
      print('$num is a prime number.');
    } else {
      print('$num is not a prime number.');
    }
  }
}

