#include <QApplication>
#include <QLabel>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Welcome to SWYM");
    label->setWindowTitle("Example Code");
    label->show();
    label->resize(300, 100);
    return app.exec();
}
