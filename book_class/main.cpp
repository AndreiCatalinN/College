#include <iostream>

using namespace std;
class Book {

public:
  // Constructors
  Book(string name, string author, int page_num, string isbn) {
    this.author = setAuthor(author);
    this.name = setName(name);
    this.isbn = setIsbn(isbn);
    this.page_num = setPage_num(page_num);
  }
  //
  // Setters
  void setName(string name) { this.name = name; }
  void setIsbn(string isbn) { this.isbn = isbn; }
  void setAuthor(string author) { this.author = author; }
  void setPage_num(int page) { this.page_num = page; }
  // Getters
  string getName() { return this.name; }
  string getAuthor() { return this.author; }
  string getIsbn() { return this.isbn; }
  int getPage_num() { return this.page_num; }

private:
  string name;
  string author;
  int page_num;
  string isbn;
};

int main() {
  cout << "Hello world!" << endl;
  return 0;
}
