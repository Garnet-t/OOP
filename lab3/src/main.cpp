#include <iostream>
#include <vector>
#include "../include/pentagon.h"

void addFigureMenu(std::vector<Figure*>& Figures) {
    char command;
    while (true) {
        std::cout << "addition (f - 5-ug, s - 6-ug , o - rhomb, q - finish(complete)): ";
        std::cin >> command;
        Figure* fig = nullptr;
        if (command == 'q') break;
        switch (command) {
            case 'f': 
                fig = new Pentagon();
                break;
            case 's': 
                fig = new Pentagon();
                break;
            case 'o': 
                fig = new Pentagon();
                break;
            default:
                std::cout << "Wrong symbol -program exit" << std::endl;
                return;
        }
        
        std::cout << "Vv coordinats:\n";
        std::cin >> *fig;
        Figures.push_back(fig);
        std::cout << "Figure is added.\n";
    }
}


void cleanUp (std::vector<Figure*>& Figures) {
    for (auto& fig : Figures) {
        delete fig;
    }
}


void manageFiguresMenu(std::vector<Figure*>& Figures) {
    if (Figures.empty()) {
        std::cout << "Список фигур пуст.\n";
        return;
    }

    int command;
    while (true) {
        std::cout << "\nМеню взаимодействия с фигурами:\n"
        "1 - Вывести список фигур\n"
        "2 - Узнать центр и площадь фигуры\n"
        "3 - Вычислить общую площадь всех фигур\n"
        "4 - Удалить фигуру\n"
        "5 - Вернуться в главное меню\n"
        "Выберите действие: ";
        std::cin >> command;

        if (command == 5) break;

        switch (command) {
            case 1: {
                std::cout << "Список фигур:\n";
                for (size_t i = 0; i < Figures.size(); ++i) {
                    std::cout << "Фигура " << i + 1 << ": " << *Figures[i] << "\n";
                }
                break;
            }
            case 2: {
                size_t index;
                std::cout << "Введите номер фигуры (1-" << Figures.size() << "): ";
                std::cin >> index;

                if (index > 0 && index <= Figures.size()) {
                    Figure::Dot center = Figures[index - 1]->center();
                    std::cout << "Центр: (" << center.x << ", " << center.y << ")\n";
                    std::cout << "Площадь: " << static_cast<double>(*Figures[index - 1]) << "\n";
                } else {
                    std::cout << "Некорректный индекс.\n";
                }
                break;
            }
            case 3: {
                double total_area = 0;
                for (const auto& fig : Figures) {
                    total_area += static_cast<double>(*fig);
                }
                std::cout << "Общая площадь всех фигур: " << total_area << "\n";
                break;
            }
            case 4: {
                size_t index;
                std::cout << "Введите номер фигуры для удаления (1-" << Figures.size() << "): ";
                std::cin >> index;

                if (index > 0 && index <= Figures.size()) {
                    delete Figures[index - 1];
                    Figures.erase(Figures.begin() + (index - 1));
                    std::cout << "Фигура успешно удалена.\n";
                } else {
                    std::cout << "Некорректный индекс.\n";
                }
                break;
            }
            default:
                std::cout << "Некорректный выбор.\n";
                break;
        }
    }
}

int main() {
    std::vector<Figure*> Figures;
    int command;

    while (true) {
        std::cout << "vv fihure\n"
        "1 - add figure\n"
        "2 - do smth with  5-ugoln 6-ugoln rhomb \n"
        "3 - finish\n"
        "choose: ";
        std::cin >> command;

        if (command == 3) break;
        switch (command) {
            case 1:
                addFigureMenu(Figures);
                break;
            case 2:
                manageFiguresMenu(Figures);
                break;
            default:
                std::cout << "Read menu again\n";
                break;
        }
    }

    cleanUp (Figures);
    return 0;
}
