//Write a Program to show swap of two No's without using third 
//variable. 

void main() {
  int a = 10;
  int b = 20;

  print("Before swap: a = $a, b = $b");

  
  a = a + b;
  b = a - b;
  a = a - b;

  print("After swap: a = $a, b = $b");
}
