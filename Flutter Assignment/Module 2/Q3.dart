//Write a program to find the Max number from the 
//given three number using Nested If


void main(List<String> args) {
  int a, b, c;
  a = 2;
  b = 15;
  c = 7;

  if (a > b) {
    if (a > c) {
      print("A is greater");
    } else {
      print("C is greater");
    }
  } else {
    if (b > c) {
      print("B is greater");
    } else {
      print("C is greater");
    }
  }
}
