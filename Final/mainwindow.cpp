#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMovie>
#include <QSize>
#include <QMessageBox>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tableWin = new TableWindow();
    QMovie *movie = new QMovie(":/gif/school.gif");
    movie->setScaledSize(QSize(500,500));
    ui->gif->setMovie(movie);
    movie->start();
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
        QString name = ui->name->text();
        QString roll = ui->roll_no->text();
        QString fname = ui->fname->text();
        QString caste = ui->caste->text();
        QString district = ui->district->text();
        QString gpa = ui->gpa->text();

        if (name.isEmpty() || roll.isEmpty() || fname.isEmpty() ||
            caste.isEmpty() || district.isEmpty() || gpa.isEmpty())
        {
            QMessageBox::warning(this, "Error", "Please fill all fields!");
            return;
        }

        QFile file("students.txt");
        if (!file.open(QIODevice::Append | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Could not open file!");
            return;
        }

        QTextStream out(&file);
        out << name << "," << roll << "," << fname << "," << caste << ","
            << district << "," << gpa << "\n";

        file.close();

        ui->name->clear();
        ui->roll_no->clear();
        ui->fname->clear();
        ui->caste->clear();
        ui->district->clear();
        ui->gpa->clear();

        QMessageBox::information(this, "Success", "Student record added!");

}



void MainWindow::on_pushButton_5_clicked()
{
    tableWin->loadDataFromFile();
    tableWin->show();
}


void MainWindow::on_pushButton_2_clicked()
{
        QString name = ui->name->text();
        QString roll = ui->roll_no->text();
        QString fname = ui->fname->text();
        QString caste = ui->caste->text();
        QString district = ui->district->text();
        QString gpa = ui->gpa->text();

        if (roll.isEmpty()) {
            QMessageBox::warning(this, "Error", "Roll Number required to update!");
            return;
        }

        QFile file("students.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Cannot open file!");
            return;
        }

        QStringList lines;
        QTextStream in(&file);

        bool found = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(",");

            if (fields.size() == 6 && fields[1] == roll) {
                // Replace with updated data
                line = name + "," + roll + "," + fname + "," + caste + "," + district + "," + gpa;
                found = true;
            }

            lines.append(line);
        }

        file.close();

        if (!found) {
            QMessageBox::warning(this, "Error", "Roll Number not found!");
            return;
        }

        // Write back updated file
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Cannot write file!");
            return;
        }

        QTextStream out(&file);
        for (QString line : lines)
            out << line << "\n";

        file.close();

        QMessageBox::information(this, "Success", "Record Updated Successfully!");

        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_3->setEnabled(false);
    }

void MainWindow::on_pushButton_3_clicked()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_4->setEnabled(false);


        QString roll = ui->roll_no->text();

        if (roll.isEmpty()) {
            QMessageBox::warning(this, "Error", "Roll Number required to delete!");
            return;
        }

        QFile file("students.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Cannot open file!");
            return;
        }

        QStringList lines;
        QTextStream in(&file);

        bool found = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(",");

            // If not the record to delete, keep it
            if (fields.size() == 6 && fields[1] == roll) {
                found = true;
                continue;  // SKIP this line → deletes the record
            }

            lines.append(line);
        }

        file.close();

        if (!found) {
            QMessageBox::warning(this, "Error", "Roll Number not found!");
            return;
        }

        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Cannot write file!");
            return;
        }

        QTextStream out(&file);
        for (QString line : lines)
            out << line << "\n";

        file.close();

        QMessageBox::information(this, "Success", "Record Deleted Successfully!");
    }


    void MainWindow::on_pushButton_4_clicked()
    {
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);


            studentList.clear();
            currentIndex = -1;

            QFile file("students.txt");
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
                return;

            QTextStream in(&file);

            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList fields = line.split(",");

                if (fields.size() == 6)
                    studentList.append(fields);
            }

            file.close();
        }

