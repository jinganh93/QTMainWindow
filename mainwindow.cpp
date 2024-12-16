#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    connect(action_S, SIGNAL(triggered(bool)), this, SLOT(savefile()));
}

MainWindow::~MainWindow() {}

void MainWindow::savefile(){
    QString fileName = QFileDialog::getSaveFileName(this, QStringLiteral("儲存檔案"), ".", QStringLiteral("文字檔(*.txt);;所有檔案(*.*)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << textEdit->toPlainText();
            file.close();
        }
    }
}
