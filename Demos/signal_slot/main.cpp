#include <qt5/QtWidgets/QtWidgets>

int main(int argc, char *argv[])
{
    /* Create QT Application */
    QApplication app(argc, argv);
    app.setPalette(QColorConstants::White);

    /* Create a new window and et its size if necessary */
    QDialog *window = new QDialog;
    window->setWindowTitle("Hello world");
    // window->resize(800, 600);

    /* Create a simple label */
    QSpinBox *spin_box = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);

    /* Connect signal and slot */
    QWidget::connect(slider, SIGNAL(valueChanged(int)), spin_box, SLOT(setValue(int)));
    QWidget::connect(spin_box, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));

    /* Vertical box layout */
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(spin_box);
    layout->addWidget(slider);
    
    /* Add layout to window and show it */
    window->setLayout(layout);
    window->show();

    /* Run QT Application */
    return app.exec();
}
