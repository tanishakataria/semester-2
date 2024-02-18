#include<iostream>
#include<string>
using namespace std;

class book {
private:
    string author;
    string title;
    int pages_count;
    int pages_read;

public:
    book() : pages_count(1000), pages_read(0) {}

    void settitle(string &newtitle) {
        this->title = newtitle;
    }

    void setauthor(string &newauthor) {
        this->author = newauthor;
    }

    void setpages_count(int newpages_count) {
        this->pages_count = newpages_count;
    }

    void setpages_read(int newpages_read) {
        if (newpages_read >= 0 && newpages_read <= pages_count) {
            pages_read = newpages_read;
        }
        else {
            cout << "Invalid number of pages read" << endl;
        }
    }

    void showbookinfo() {
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Pages Read: " << pages_read << endl;
        cout << "Pages Count: " << pages_count << endl;
    }
};

int main() {
    book mybook;
    string newtitle = "Love";
    string newauthor = "Maxwell";
    mybook.settitle(newtitle);
    mybook.setauthor(newauthor);
    mybook.setpages_read(320);
    mybook.showbookinfo();
    return 0;
}
