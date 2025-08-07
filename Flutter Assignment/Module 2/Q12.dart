//Write a program you have to print the table of given 
//number.

import 'dart:io';

void main(List<String> args) {
  stdout.write("Enter your number:");
  int a=int.parse(stdin.readLineSync()!);

  for(int i=1;i<=10;i++){
    int k=a*i;
    print('$a * $i = $k');
  }
} 