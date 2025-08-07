//Write a program user enter the 5 subjects mark. You 
//have to make a total and find the percentage. percentage 
//> 75 you have to print “Distinction” percentage > 60 and 
//percentage <= 75 you have to 
//print “First class” percentage >50 and percentage <= 60 you 
//have  to print “Second class” percentage > 35 and percentage 
//<= 50 you have to print “Pass class” Otherwise print “Fail” 

import 'dart:collection';
import 'dart:io';

void main(List<String> args) {
  print("Enter marks of english:");
  double a=double.parse(stdin.readLineSync()!);
    print("Enter marks of Maths:");
  double b=double.parse(stdin.readLineSync()!);
    print("Enter marks of Science:");
  double c=double.parse(stdin.readLineSync()!);
    print("Enter marks of Hindi:");
  double d=double.parse(stdin.readLineSync()!);
    print("Enter marks of Gujarati:");
  double e=double.parse(stdin.readLineSync()!);

  double total=a+b+c+d+e;
  print('Your Total Marks is:$total');
  double t1=500;
   double per = (total / 500) * 100;

  print("Your percentage is:$per");

  if(per>=75){
    print('Distinction');
  }else if(per>=60 && per<75){
    print('First Class');
  }else if(per>=50 && per<60){
    print('Second Class');
  }else if(per>=35 && per<50){
    print('Pass');

  }else{
    print("Fail");
  }
  
}