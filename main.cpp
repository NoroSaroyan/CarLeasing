#include <QApplication>
#include <QPushButton>
#include "UI/cars/carcatalogpage.h"

int main(int argc, char *argv[]) {


    QApplication a(argc, argv);
//    QPushButton button("Hello world!", nullptr);
//    button.resize(200, 100);
//    button.show();

    CarCatalogPage catalogPage;
    catalogPage.show();
    return QApplication::exec();
}
