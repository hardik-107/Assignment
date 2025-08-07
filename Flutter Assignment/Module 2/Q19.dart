//Create a program using Map
void main() {
  Map<String, int> marks = {
    'Math': 90,
    'Science': 85,
    'English': 88
  };

  marks['History'] = 75;
  marks.remove('Science');

  marks.forEach((subject, score) {
    print('$subject: $score');
  });
}
