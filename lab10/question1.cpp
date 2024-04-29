#include <iostream>
#include <string>

using namespace std;

class Logo {
private:
    string logo;

    friend class Platform; // Allow Platform to access private members
    friend class Server;   // Allow Server to access private members

    void changeLogo(const string& newLogo) {
        logo = newLogo;
    }

public:
    Logo(const string& logoName) : logo(logoName) {}

    void display() const {
        cout << "Original Logo: " << logo << endl;
    }
};

class Platform {
private:
    string name;

public:
    Platform(const string& platformName) : name(platformName) {}

    void display(const Logo& logo) const {
        cout << "Platform Name: " << name << endl;
        logo.display();
    }
};

class Server {
private:
    int serverID;

public:
    Server(int id) : serverID(id) {}

    void display(const Logo& logo) const {
        cout << "Server ID: " << serverID << endl;
        logo.display();
    }

    void changeLogo(Logo& logo, const string& newLogo) {
        logo.changeLogo(newLogo);
    }
};

int main() {
    Logo twitterLogo("Blue Bird");
    Platform twitter("Twitter");
    Server twitterServer(12345);

    cout << "Before Change:" << endl;
    twitter.display(twitterLogo);
    twitterServer.display(twitterLogo);

    twitterServer.changeLogo(twitterLogo, "Doge Coin");

    cout << "\nAfter Change:" << endl;
    twitter.display(twitterLogo);
    twitterServer.display(twitterLogo);

    return 0;
}
