#ifndef BOOK_H_
#define BOOK_H_
#include <string>

using namespace std;

class Book {
private:
  string author;
  string title;
public:
  Book(string t, string a);
  string getTitle() const;
  string getAuthor() const;
  void setTitle(string title);
  void setAuthor(string author);
};

#endif /* BOOK_H_ */