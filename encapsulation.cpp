#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
   
    Student(std::string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    
    std::string getName() {
        return name;
    }

    
    void setName(std::string newName) {
        name = newName;
    }

    
    int getAge() {
        return age;
    }

    
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        }
    }
};

int main() {
    // Öğrenci nesnesi oluşturuluyor
    Student student("Ahmet", 20);

    // Öğrenci bilgileri alınıyor ve ekrana yazdırılıyor
    std::cout << "Öğrencinin adı: " << student.getName() << std::endl;
    std::cout << "Öğrencinin yaşı: " << student.getAge() << " yaşında" << std::endl;

    // Öğrenci bilgileri güncelleniyor
    student.setName("Mehmet");
    student.setAge(21);

    std::cout << "Güncellenmiş öğrenci bilgileri:" << std::endl;
    std::cout << "Öğrencinin adı: " << student.getName() << std::endl;
    std::cout << "Öğrencinin yaşı: " << student.getAge() << " yaşında" << std::endl;

    return 0;
}
