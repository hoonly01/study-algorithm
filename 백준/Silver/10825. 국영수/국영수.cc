#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
    public:
        string name;
        int kor;
        int mat;
        int eng;
        Student(string name, int kor, int eng, int mat)
        {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mat = mat;
        }
        bool operator<(const Student &student) const
        {
            if (this->kor != student.kor)
                return this->kor > student.kor;
            if (this->eng != student.eng)
                return this->eng < student.eng;
            if (this->mat != student.mat)
                return this->mat > student.mat;
            return this->name < student.name;
        }
};

    int main()
    {
       ios::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        cin >> n;

        vector<Student> students;

        for (int i = 0; i < n; i++)
        {
            string name;
            int kor, mat, eng;
            cin >> name >> kor >> eng >> mat;
            students.emplace_back(name, kor, eng, mat);
        }

        sort(students.begin(), students.end());

        for (int i = 0; i < n; i++)
        {
            cout << students[i].name << '\n';
        }

        return 0;
    }