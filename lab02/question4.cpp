
#include <iostream>
#include <string>
using namespace std;
class Smartphone {
private:
    string brand;
    string model;
    string displayResolution;
    int ram;
    int rom;
    int storage;

public:
    Smartphone(const string& brand, const string& model, const string& resolution,
               int ram, int rom, int storage)
        : brand(brand), model(model), displayResolution(resolution),
          ram(ram), rom(rom), storage(storage) {}

    string getBrand() const { return brand; }
    string getModel() const { return model; }
    string getDisplayResolution() const { return displayResolution; }
    int getRAM() const { return ram; }
    int getROM() const { return rom; }
    int getStorage() const { return storage; }

    void makeCall(const string& phoneNumber) {
        cout << "Calling " << phoneNumber << endl;
    }

    void sendMessage(const string& recipient, const string& message) {
        cout << "Sending message to " << recipient << ": " << message << endl;
    }

    void connectToWiFi(const std::string& networkName) {
        cout << "Connecting to Wi-Fi network: " << networkName << endl;
    }

    void browseInternet() {
        cout << "Browsing the internet" << endl;
    }
};

int main() {
    Smartphone phone1("Apple", "iPhone 13", "1170x2532", 6, 128, 128);
    Smartphone phone2("Samsung", "Galaxy S21", "1080x2400", 8, 128, 256);

    cout << "Phone 1:" << endl;
    cout << "Brand: " << phone1.getBrand() << endl;
    cout << "Model: " << phone1.getModel() << endl;
    cout << "Display Resolution: " << phone1.getDisplayResolution() << endl;
    cout << "RAM: " << phone1.getRAM() << "GB" << endl;
    cout << "ROM: " << phone1.getROM() << "GB" << endl;
    cout << "Storage: " << phone1.getStorage() << "GB" << endl;

    cout << endl;

    cout << "Phone 2:" << endl;
    cout << "Brand: " << phone2.getBrand() << endl;
    cout << "Model: " << phone2.getModel() << endl;
    cout << "Display Resolution: " << phone2.getDisplayResolution() << endl;
    cout << "RAM: " << phone2.getRAM() << "GB" << endl;
    cout << "ROM: " << phone2.getROM() << "GB" << endl;
    cout << "Storage: " << phone2.getStorage() << "GB" << endl;

    phone1.makeCall("1234567890");
    phone2.sendMessage("John", "Hello, how are you?");
    phone1.connectToWiFi("MyHomeWiFi");
    phone2.browseInternet();

    return 0;
}
