#include <qt5/QtWidgets/QtWidgets>

int main(int argc, char *argv[])
{
    /* Create QT Application */
    QApplication app(argc, argv);

    /* Create a new window and et its size if necessary */
    QDialog *window = new QDialog;
    window->setWindowTitle("Hello world");
    // window->resize(800, 600);

    /* Create a simple label */
    QLabel *label = new QLabel;
    label->setText("Hello world");

    /* Add font to label (Optional) */
    // QFont *font = new QFont;
    // font->setFamily("Courier New");
    // label->setFont(*font);

    /* Vertical box layout */
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);

    /* Add layout to window and show it */
    window->setLayout(layout);
    window->show();

    /* Run QT Application */
    return app.exec();
}
