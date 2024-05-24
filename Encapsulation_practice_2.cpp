#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;

class student 
{
    string name;    
    int age;        
    float average;  
public:
   
    void set_name(string n) { name = n; }
    void set_age(int a) { age = a; }
    void set_average(float avg) { average = avg; }

   
    string get_name() { return name; }
    int get_age() { return age; }
    float get_average() { return average; }

    
    void show()
    {
        cout << "Студент: " << name << ", Вік: " << age << ", Середній бал: " << average << endl;
    }
};

int main()
{
    
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 

    int N;
    cout << "Введіть кількість студентів: ";
    cin >> N;

    
    student* students = new student[N];

    
    for (int i = 0; i < N; i++)
    {
        string name;
        int age;
        float average;

        cout << "Введіть ім'я студента: ";
        cin >> ws;  
        getline(cin, name);
        students[i].set_name(name);

        cout << "Введіть вік студента: ";
        cin >> age;
        students[i].set_age(age);

        cout << "Введіть середній бал студента: ";
        cin >> average;
        students[i].set_average(average);
    }

    cout << "Заданий середній бал: ";
    float average_threshold;
    cin >> average_threshold;

    for (int i = 0; i < N; i++)
    {
        if (students[i].get_average() > average_threshold)
        {
            students[i].show();
        }
    }

    delete[] students;
    return 0;
}
