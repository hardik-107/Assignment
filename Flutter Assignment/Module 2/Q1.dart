//Write a Program to check the given year is leap year o
import 'dart:io';

void
main(
  List<
    String
  >
  args,
) {
  print(
    'Enter Year:',
  );
  int a = int.parse(
    stdin.readLineSync()!,
  );

  if (a %
          4 ==
      0) {
    print(
      "It is a Leap Year",
    );
  } else {
    print(
      "Not a leap year",
    );
  }
}
