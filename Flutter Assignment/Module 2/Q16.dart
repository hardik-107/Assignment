//pattern 4
//pattern 5
//pattern 6


import 'dart:io';

void main() {
  int rows = 5;

  // Reverse number right-aligned pyramid
  for (int i = 1; i <= rows; i++) {
    stdout.write(' ' * (rows - i));
    for (int j = i; j >= 1; j--) {
      stdout.write(j);
    }
    print('');
  }

  print('');

  // Right-aligned star pyramid
  for (int i = 1; i <= rows; i++) {
    stdout.write(' ' * (rows - i));
    stdout.writeln('*' * i);
  }

  print('');

  // Centered star pyramid
  for (int i = 1; i <= rows; i++) {
    stdout.write(' ' * (rows - i));
    stdout.writeln('*' * (2 * i - 1));
  }
}
