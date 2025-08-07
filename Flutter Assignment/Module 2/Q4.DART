///Write a program to find the Max number from the 
///given three numbers using terniary operator

void main() {
  int a = 5, b = 12, c = 9;

  int max = (a > b)
      ?(a > c ? a : c)
      :(b > c ? b : c);

  print("Max is $max"); // Output: Max is 12
}

