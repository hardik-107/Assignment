import 'dart:io';

///2. Write a program to make addition, Subtraction,
///Multiplication and Division of Two Numbers.

void main(List<String> args) {
  print('Enter Your Number a:');
  int a = int.parse(stdin.readLineSync()!);

  print('Enter Your Number b:');
  int b = int.parse(stdin.readLineSync()!);

  print(
    'Enter Your Choice:1.Addition 2.Subtraction 3.Multiplication 4.Division',
  );

  int c = int.parse(stdin.readLineSync()!);

  switch (c) {
    case 1:
      int x = a + b;
      print("Your Addition is:$x");
      break;

    case 2:
      int y = a - b;
      print("Your Substraction is $y");
      break;

    case 3:
      int z = a * b;
      print("Your multiplication is:$z");
      break;

    case 4:
      int w = a ~/ b;
      print("Your division is: $w");
      break;
    default:
      print("Invalid Input");
  }
}
