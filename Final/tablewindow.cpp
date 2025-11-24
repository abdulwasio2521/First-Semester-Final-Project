#include "tablewindow.h"
#include <QVBoxLayout>
#include <QFile>
#include <QTextStream>

TableWindow::TableWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("All Student Records");

    table = new QTableWidget(this);
    table->setColumnCount(6);
    table->setHorizontalHeaderLabels({"Name", "Roll No", "Father Name", "Caste", "District", "GPA"});

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(table);

    loadDataFromFile();
}

void TableWindow::loadDataFromFile()
{
    table->setRowCount(0);

    QFile file("students.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (fields.size() == 6) {
            int row = table->rowCount();
            table->insertRow(row);

            for (int i = 0; i < 6; i++)
                table->setItem(row, i, new QTableWidgetItem(fields[i]));
        }
    }

    file.close();
}
