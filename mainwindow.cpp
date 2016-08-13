#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
  大概的数字处理过程：将所有的输入数学式子添加到strVec里面，只有当显示的时候才被转换为QString形式。
  按下等好的同时，清空所有符号栈和数字栈，

  以下注释将详细介绍功能。
*/
void MainWindow::on_pushButton0_clicked()//按下0按钮
{
    /*0到9的操作相似。*/
    /*这两行供退格键使用，用来防止字符的重复输入*/
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);//当退格键按下后可以使用栈还原之前的状态
    /*将strVec中添加0，并转换为QString显示到屏幕上(因为Qt没有完全按照C++标准实现QString::pop()
     * 函数，在退格时不能使用该函数，所以因此使用QVector<QString>来储存)*/
    strVec.push_back("0");
    //使用迭代器将QVector里的内容复制到QString里，并显示
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)//迭代器开始装逼
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton1_clicked()//按下1按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("1");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton2_clicked()//按下2按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("2");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton3_clicked()//按下3按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("3");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton4_clicked()//按下4按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("4");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton5_clicked()//按下5按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("5");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton6_clicked()//按下6按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("6");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton7_clicked()//按下7按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("7");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton8_clicked()//按下8按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("8");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButton9_clicked()//按下9按钮
{
    this->signalInputFlag=true;
    booleanStack4Backspace.push(true);
    strVec.push_back("9");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButtonPlus_clicked()//按下+按钮
{
    /*加 减 乘 除 点，方法类似*/
    /*将输入符号Flag置false，禁止接下来输入符号*/
    if(signalInputFlag==false)  return;
    this->signalInputFlag=false;
    booleanStack4Backspace.push(false);

    strVec.push_back("+");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButtonMinus_clicked()//按下-按钮
{
    if(signalInputFlag==false)  return;
    this->signalInputFlag=false;
    booleanStack4Backspace.push(false);
    strVec.push_back("-");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButtonMultiple_clicked()//按下*按钮
{
    if(signalInputFlag==false)  return;
    this->signalInputFlag=false;
    booleanStack4Backspace.push(false);
    strVec.push_back("*");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButtonDivide_clicked()//按下/按钮
{
    if(signalInputFlag==false)  return;
    this->signalInputFlag=false;
    booleanStack4Backspace.push(false);
    strVec.push_back("/");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButtonDot_clicked()//按下.按钮
{
    if(signalInputFlag==false)  return;
    this->signalInputFlag=false;
    booleanStack4Backspace.push(false);
    strVec.push_back(".");
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButtonC_clicked()//按下C按钮
{
    /*将所有栈清空*/
    this->signalInputFlag=false;
    strVec.clear();
    numStack.clear();
    signalStack.clear();
    booleanStack4Backspace.clear();
    /*清空this->所有的变量*/
    signalInputFlag=true;
    haveMultipleOrDivisionBefore=false;
    /*以下代码显示空结果*/
    QString str;
    ui->lineEditString->setText(str);
    ui->lineEditResult->setText(str);
}

void MainWindow::on_pushButtonBackspace_clicked()//按下←按钮
{
    /*防错，当屏幕上没有东西的时候不进行以下操作*/
    if(strVec.empty())
        return;
    /*strVec栈弹出*/
    strVec.pop_back();
    /*符号输入Flag的还原*/
    booleanStack4Backspace.pop();
    signalInputFlag = booleanStack4Backspace.top();
    //显示
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    ui->lineEditString->setText(str);
}

void MainWindow::on_pushButtonEqual_clicked()//按下=按钮，所有计算的操作都是从这里开始的
{
    //清空所有栈后开始计算，使得式子栏可以重复再利用
    numStack.clear();
    signalStack.clear();
    /*把str转换成储存数字的List和储存符号的List*/
    QStringList number;//是一个储存所有纯数值的链表
    QStringList signal;//是一个储存所有纯符号的链表（点号除外）
    //把strVec转换成str
    QString str;
    for(QVector<QString>::iterator it=strVec.begin();it!=strVec.end();it++)
        str+=*it;
    //调用在头文件声明的QString_split来分割输入的字符串
    number=QString_split(str,"+-*/");
    signal=QString_split(str,"0123456789.");

    //防错处理
    if(signal.isEmpty())//如果输入了1个或者0个数字
    {
        if(!number.isEmpty())//如果输入了1个数字
        {
            ui->lineEditResult->setText(number.at(0));
            ui->lineEditString->setText(number.at(0));
        }
        else //如果输入了0个数字
        {
            ui->lineEditResult->setText("0");
            ui->lineEditString->setText("0");
        }
        return ;
    }
    /*如果式子的结尾不是数字报错，所有计算不被执行！*/
    if(strVec.back()=="+" || strVec.back()=="-"
            || strVec.back()=="*" || strVec.back()=="/")
    {
        ui->lineEditResult->setText("错误！");
        return ;
    }
    signal.append("=");//将signal加上等号，保证数字与符号的一致数量
    for(int i=0;i<signal.size();i++)
    {
        QChar signalTemp=signal.at(i).at(0);//提取要处理的符号
        if(signalTemp=='+' || signalTemp=='-')
        {
            haveMultipleOrDivisionBefore=false;
            //如果是加号或者减号而且栈是空的则把这个数字和这个符号压栈
            if(signalStack.isEmpty())
            {
                signalStack.push(signalTemp);
                numStack.push(number.at(i).toDouble());
            }
            else if(numStack.size()==2)
            {
                /*
                 * 如果是加号或者减号而且栈不是空的则把数字栈numStack
                 * 前面的两个数字使用符号栈signalStack弹出的符号进行
                 * 计算。计算完成后把结果压入数字栈，然后再把目前的数字
                 * 压入numStack数字栈，把目前的字符也压入signalStack
                 * 符号栈。
                */
                double newNum,n1,n2;
                newNum=number.at(i).toDouble();
                n2=numStack.top();
                numStack.pop();
                n1=numStack.top();
                numStack.pop();
                QString s=signalStack.top();
                signalStack.pop();
                if(s=="+")  numStack.push(n1+n2);
                else  numStack.push(n1-n2);
                signalStack.push(signalTemp);
                numStack.push(newNum);
            }
            else
            {
                double newNum,n1;
                newNum=number.at(i).toDouble();
                n1=numStack.top();
                numStack.pop();
                QString s=signalStack.top();
                signalStack.pop();
                if(s=="+")  numStack.push(n1+newNum);
                else  numStack.push(n1-newNum);
                signalStack.push(signalTemp);
                //numStack.push(newNum);
            }
        }
        else if(signalTemp=='*')
        {
            /*如果是乘(除)号的话，将这个位置的元素乘(除)下一个位置的元素
             * 再将结果压入numStack数字栈，最后把除数从number链表里删除
             * 避免重复使用，在循环中使用i为下标也不会出现问题。
            */
            if(haveMultipleOrDivisionBefore==false
                    && signalStack.isEmpty())
            {
                numStack.push(number.at(i).toDouble()*number.at(i+1).toDouble());
                number.removeAt(i+1);
            }
            else
            {
                double t=numStack.top();
                numStack.pop();
                numStack.push(t*number.at(i).toDouble());
            }
            haveMultipleOrDivisionBefore=true;
        }
        else if(signalTemp=='/')
        {
            if(haveMultipleOrDivisionBefore==false
                    && signalStack.isEmpty())
            {
                double t=number.at(i+1).toDouble();
                if(t==0)//防止除数为零
                {
                    on_pushButtonC_clicked();
                    ui->lineEditResult->setText("错误！");
                    return ;
                }
                numStack.push(number.at(i).toDouble()/t);
                number.removeAt(i+1);
            }
            else
            {
                double t=numStack.top();
                numStack.pop();
                numStack.push(t/number.at(i).toDouble());
            }
            haveMultipleOrDivisionBefore=true;
        }
        else if(signalTemp=='='
                && signalStack.size()==numStack.size())
            numStack.push(number.at(i).toDouble());
    }
    if(!signalStack.isEmpty() && (signalStack.top()=='+'
            || signalStack.top()=='-'))
    {
        //此时剩余最后一次加减运算。栈中只有两个数字，一个符号
        QChar SignalTemp=signalStack.top();
        signalStack.pop();
        double N1,N2;
        N1=numStack.top();
        numStack.pop();
        N2=numStack.top();
        numStack.pop();
        if(SignalTemp=='+')
            numStack.push(N1+N2);
        else if(SignalTemp=='-')
            numStack.push(N2-N1);
    }

    //将最终的结果弹出并输出
    QString result;
    result.setNum(numStack.top());
    numStack.pop();
    ui->lineEditResult->setText(result);

}
