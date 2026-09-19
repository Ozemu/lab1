#include <iostream>
#include <cmath>
using namespace std;

double rectangle_perimeter(double length, double width) {
    return 2 * (length + width);
}

double rectangle_area(double length, double width) {
    return length * width;
}

double rectangle_diagonal(double length, double width) {
    return sqrt(length * length + width * width);
}

double triangle_perimeter(double a, double b, double c) {
    return a + b + c;
}

double triangle_area(double a, double b, double c) {
    double p = triangle_perimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool is_isosceles(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}

int main() {
    int choice;
    cout << "Выберите фигуру:\n";
    cout << "1 - Прямоугольник\n";
    cout << "2 - Треугольник\n";
    cout << "Ваш выбор: ";
    cin >> choice;
    
    if (choice == 1) {
        double length, width;
        cout << "Введите длину и ширину прямоугольника: ";
        cin >> length >> width;
        
        if (length > 0 && width > 0 ) {
        cout << "Периметр: " << rectangle_perimeter(length, width) << endl;
        cout << "Площадь: " << rectangle_area(length, width) << endl;
        cout << "Длина диагонали: " << rectangle_diagonal(length, width) << endl;
        }
        else {
            cout << "Прямоугольник с такими сторонами не существует!" << endl;
        }
    }
    else if (choice == 2) {
        double a, b, c;
        cout << "Введите три стороны треугольника: ";
        cin >> a >> b >> c;
        
        if (a + b > c && a + c > b && b + c > a) {
            cout << "Периметр: " << triangle_perimeter(a, b, c) << endl;
            cout << "Площадь: " << triangle_area(a, b, c) << endl;
            cout << "Равнобедренный: " << (is_isosceles(a, b, c) ? "да" : "нет") << endl;
        } else {
            cout << "Треугольник с такими сторонами не существует!" << endl;
        }
    }
    else {
        cout << "Неверный выбор!" << endl;
    }
    
    return 0;
}
