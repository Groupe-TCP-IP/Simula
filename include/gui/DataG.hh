#ifndef DATA_G_HPP
#define DATA_G_HPP

#include <QApplication>
#include <QPushButton>
#include <QTableWidget>
#include <QTabBar>
#include <QLayout>
#include <QFont>
#include <QLabel>
#include <QTextEdit>
#include <QScrollArea>
#include <QDebug>

#include "Data.hh"
#include "DataOutils.hh"

class DataG : public QTabBar    {
    Q_OBJECT

private :
		Data * d;
		std::vector<Data *> send;
		QPushButton detail, left, right;
		QHBoxLayout * grid;
		int curent;
		void addMessage (void);
		void addSegment (void);
		void addPaquet (void);
		void addTrame (void);
		void predicateData (void);
		void updatePanel(void);
		
public :
        DataG( Data *d, QWidget* parent = 0 );

private slots:
//		void dataChanged();
        void detailPanel();
        void displayLeft();
        void displayRight();
};


#endif // DATA_G_HPP
