//Write a program of to find out the Area of Triangle, 
//Rectangle and Circle using If Condition.(Must Be Menu 
//Driven) 

import 'dart:io';

void main(List<String> args) {
  stdout.write("Enter Your choice:1.Area Of Circle 2.Area of Rectangle");
  int choice=int.parse(stdin.readLineSync()!);

  switch(choice){
case 1:
double pi=2.14;
stdout.write("Enter radius:");
double r =double.parse(stdin.readLineSync()!);

double area=pi*r*r;
print("Area of circle is $area");

case 2:
stdout.write('Enter base of triangle:');
double b=double.parse(stdin.readLineSync()!);

stdout.write("Enter height:");
double h =double.parse(stdin.readLineSync()!);

double area=0.5*h*b;
print("Area of triangle is:$area");  }
}