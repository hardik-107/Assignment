//Create a program using Set
void main() {
  Set<int> numbers = {1, 2, 3, 2, 1};

  numbers.add(4);
  numbers.remove(2);

  for (var num in numbers) {
    print(num);
  }
}
