#include<iostream>
#include<string>
using namespace std;

class book {
private:
    string name;
    string author;
    int isbn_no;
    int total_pagecount;
    int no_pageread;

public:
    // Default constructor
    book() {
        name = "forty love";
        author = "rachnd";
        isbn_no = 231;
        total_pagecount = 500;
        no_pageread = 300;
    }

    // Parameterized constructor
    book(string n, string a, int isbn, int total_pages, int pages_read) :
        name(n), author(a), isbn_no(isbn), total_pagecount(total_pages), no_pageread(pages_read) {}

    string getname() const {
        return name;
    }

    string getauthor() const {
        return author;
    }

    int getisbn_no() const {
        return isbn_no;
    }

    int gettotal_pagecount() const {
        return total_pagecount;
    }

    int getno_pageread() const {
        return no_pageread;
    }

    void update_no_pageread(int pages) {
        no_pageread += pages;
        if (no_pageread >= total_pagecount) {
            cout << "You have finished the book successfully" << endl;
        }
        else {
            cout << "You have read " << no_pageread << " out of " << total_pagecount << endl;
        }
    }
};

int main() {
    book b1;
    cout << "name: " << b1.getname() << endl;
    cout << "author: " << b1.getauthor() << endl;
    cout << "isbn no: " << b1.getisbn_no() << endl;
    cout << "total pagecount: " << b1.gettotal_pagecount() << endl;

    book b2("silent", "risk", 341, 600, 0);
    cout << "name: " << b2.getname() << endl;
    cout << "author: " << b2.getauthor() << endl;
    cout << "isbn no: " << b2.getisbn_no() << endl;
    cout << "total pagecount: " << b2.gettotal_pagecount() << endl;

    b1.update_no_pageread(50);
    b2.update_no_pageread(400);
    b1.update_no_pageread(350);

    return 0;
}

