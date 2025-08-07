//Write a Program of Addition, Subtraction 
//,Multiplication and Division using Switch case.(Must 
//Be Menu Driven)

import 'dart:io';

void main(List<String> args) {
  stdout.write('Enter A:');
  int a=int.parse(stdin.readLineSync()!);
  stdout.write('Enter B:');
  int b=int.parse(stdin.readLineSync()!);

  stdout.write("Enter you Choice:1.Addition 2.Subtraction 3.Multiplication 4.Division");
  int choice=int.parse(stdin.readLineSync()!);

  switch(choice){
    case 1:
    int c=a+b;
    print("Your Answer is $c");
    break;
    case 2:
    int c=a-b;
    print("Your Answer is $c");
    break;
    case 3:
    int c=a*b;
    print("Your Answer is $c");
    break;
    case 4:
    int c=a~/b;
    print("Your Answer is $c");
    break;
    default:
    print("Invalid Input");

  
}}