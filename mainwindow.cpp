#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, [=](){add();});
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::add() {
    this->value++;
    ui->label->setText(QString::asprintf("值：%d", this->value));
}

