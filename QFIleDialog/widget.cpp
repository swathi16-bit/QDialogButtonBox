#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget ::on_pushButton_clicked()
{
/* open an existing directory
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "C://",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    qDebug()<<"Your choosen directories is:"<<dir;
*/

/* open a file
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    qDebug()<<"Your choosen filename is:"<<fileName;
*/
/* open multiple files
    QStringList files = QFileDialog::getOpenFileNames(
                            this,
                            "Select one or more files to open",
                            "/home",
                            "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");

     qDebug()<<"Your choosen filename is:"<<files;
*/
/* save a file
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "/home/jana/untitled.png",
                               tr("Images (*.png *.xpm *.jpg);;Text files (*.txt)"));

    qDebug()<<"Your choosen filename is:"<<fileName;
*/
}
