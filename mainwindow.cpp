#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::string text;
    //system("chmod +x .bashscript");
    system("python3 pyscript.py");
    std::fstream file ("textfile.txt");

    getline(file, text);
    const QString label = QString::fromStdString(text);
    ui->label->setText(label);
}

