#ifndef TABLEWINDOW_H
#define TABLEWINDOW_H

#include <QWidget>
#include <QTableWidget>

class TableWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TableWindow(QWidget *parent = nullptr);
    void loadDataFromFile();

private:
    QTableWidget *table;
};

#endif // TABLEWINDOW_H
