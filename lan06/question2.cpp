
#include <iostream>
#include <cstdlib> // Include for rand() function
#include <ctime> // Include for time() function

using namespace std;

class Image {
private:
    int *imagedata;
    int width;
    int height;

public:
    // Constructor
    Image(int arr[], int w, int h) : width(w), height(h) {
        imagedata = new int[width * height];
        for (int i = 0; i < width * height; i++) {
            imagedata[i] = arr[i];
        }
    }

    // Copy constructor
    Image(const Image &obj) : width(obj.width), height(obj.height) {
        imagedata = new int[width * height];
        for (int i = 0; i < width * height; i++) {
            imagedata[i] = obj.imagedata[i];
        }
    }

    // Destructor
    ~Image() {
        delete[] imagedata;
    }

    // Display function
    void display() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cout << imagedata[i * width + j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Update data function
void updateData() {
    for (int i = 0; i < width * height; ++i) {
        if (imagedata[i] <= 0) {
            imagedata[i] = rand() % 255 + 1; // Random value between 1 and 255
        }
    }
}
};

int main() {
    int imagedata[6] = {1, 2, 3, 4, -1, 0};
    Image originalimage(imagedata, 2, 3);
    Image copiedimage = originalimage;

    cout << "Original Image:" << endl;
    originalimage.display();

    cout << "Copied Image:" << endl;
    copiedimage.display();

    // Update image data
    originalimage.updateData();
    copiedimage.updateData();

    cout << "Original Image after update:" << endl;
    originalimage.display();

    cout << "Copied Image after update:" << endl;
    copiedimage.display();

    return 0;
}
