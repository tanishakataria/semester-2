#include <iostream>
#include <string>
using namespace std;

// Course class definition
class Course {
private:
    string courseCode;
    string courseName;
    int creditHours;

public:
    // Constructor
    Course(string code, string name, int credits) : courseCode(code), courseName(name), creditHours(credits) {}

    // Getter methods
    string getCourseCode() const { return courseCode; }
    string getCourseName() const { return courseName; }
    int getCreditHours() const { return creditHours; }
};

// Student class definition
class Student {
private:
    string studentID;
    string studentName;
    Course* enrolledCourses[10]; // Array to store enrolled courses, assuming maximum 10 courses

public:
    // Constructor
    Student(string id, string name) : studentID(id), studentName(name) {
        // Initialize enrolledCourses array to nullptr
        for (int i = 0; i < 10; ++i) {
            enrolledCourses[i] = nullptr;
        }
    }

    // Function to enroll a course
    void enroll(const Course& course) {
        for (int i = 0; i < 10; ++i) {
            if (enrolledCourses[i] == nullptr) {
                enrolledCourses[i] = new Course(course); // Allocate memory for new course
                break;
            }
        }
    }

    // Function to drop a course
    void drop(const Course& course) {
        for (int i = 0; i < 10; ++i) {
            if (enrolledCourses[i] != nullptr && enrolledCourses[i]->getCourseCode() == course.getCourseCode()) {
                delete enrolledCourses[i]; // Deallocate memory for dropped course
                enrolledCourses[i] = nullptr;
                break;
            }
        }
    }

    // Function to get total credit hours
    int getTotalCreditHours() const {
        int totalCredits = 0;
        for (int i = 0; i < 10; ++i) {
            if (enrolledCourses[i] != nullptr) {
                totalCredits += enrolledCourses[i]->getCreditHours();
            }
        }
        return totalCredits;
    }

    // Destructor to deallocate memory for enrolled courses
    ~Student() {
        for (int i = 0; i < 10; ++i) {
            if (enrolledCourses[i] != nullptr) {
                delete enrolledCourses[i];
            }
        }
    }
};

// Main function for demonstration
int main() {
    // Create some courses
    Course course1("CSE101", "Introduction to Computer Science", 3);
    Course course2("MAT201", "Calculus I", 4);

    // Create a student
    Student student("S001", "John Doe");

    // Enroll the student in courses
    student.enroll(course1);
    student.enroll(course2);

    // Print total credit hours
    cout << "Total Credit Hours: " << student.getTotalCreditHours() << endl;

    // Drop a course
    student.drop(course2);

    // Print total credit hours after dropping a course
    cout << "Total Credit Hours After Dropping Course: " << student.getTotalCreditHours() << endl;

    return 0;
}
