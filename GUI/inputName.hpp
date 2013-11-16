#ifndef INPUTNAME_HPP
#define INPUTNAME_HPP

#include <QtWidgets/QScrollArea>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "inputForm.hpp"

class InputName : public InputForm
{
	private:
		void addRow(int);

	public:
		InputName(QWidget* = 0);

		void createForm(int);
		void resizeForm(int);
};

#endif
