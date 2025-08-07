//Create a program using List 


void main() {
  List<String> fruits = ['Apple', 'Banana', 'Mango'];

  fruits.add('Orange');
  fruits.remove('Banana');

  for (var fruit in fruits) {
    print(fruit);
  }
}
