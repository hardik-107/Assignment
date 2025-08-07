//Pattern 1
//Pattern 2
//Pattern 3
import 'dart:io';

void main(List<String> args) {
  
  for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
      stdout.write('*');
    }
    print('');
  }


  print('');

  int rows = 5;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      stdout.write(j);
    }
    print('');
 }


for(int i=1;i<=5;i++){
  for(int j=1;j<=i;j++){
    stdout.write('$i');
  }
  print('');
}
print('');
}


