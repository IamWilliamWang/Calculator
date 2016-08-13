#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QStack>
#include <sstream>
namespace Ui

{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

//    QString str;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton0_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonPlus_clicked();

    void on_pushButtonMinus_clicked();

    void on_pushButtonMultiple_clicked();

    void on_pushButtonDivide_clicked();

    void on_pushButtonDot_clicked();

    void on_pushButtonC_clicked();

    void on_pushButtonBackspace_clicked();

    void on_pushButtonEqual_clicked();

private:
    Ui::MainWindow *ui;//ui类对象
    QVector<QString> strVec;//储存输入的所有内容
    QStack<double> numStack;//数值计算需要使用的数字栈
    QStack<QChar> signalStack;//数值计算需要使用的符号栈
    QStack<bool> booleanStack4Backspace;//数值计算需要使用的符号输入Flag栈
    bool signalInputFlag;//符号输入Flag，用来控制是否可以继续输入字符
    bool haveMultipleOrDivisionBefore=false;
    /*以下是C++标准里没有的string::split函数*/
    QStringList QString_split(QString original,QString spliter)
    {
        QStringList qsl;
        QString temp;
        int start=0;
        for(int i=0;i<original.size();i++)
        {
            if(spliter.contains(original.at(i)))
            {
                temp=original.mid(start,i-start);
                if(!temp.isEmpty())  qsl<<temp;
                start=i+1;
            }
        }
        temp=original.mid(start,original.size()-start);
        if(!temp.isEmpty())  qsl<<temp;
        return qsl;
    }
};

#endif // MAINWINDOW_H
