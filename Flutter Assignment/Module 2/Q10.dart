//Write a program you have to find the factorial of 
//given number. 
//Write a program you have to print the Fibonacci series up to 
//user given number

import 'dart:io';

void main(List<String> args) {
  stdout.write('Enter your number:');
  int a=int.parse(stdin.readLineSync()!);


int i=a;
  while(i<=1){
   int k=i;
    print('The factorial is:$k');
  }
} 