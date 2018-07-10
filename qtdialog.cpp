#include "qtdialog.h"
#include "ui_qtdialog.h"

QtDialog::QtDialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::QtDialog)
{
  ui->setupUi(this);
  ui->label_editable->setWordWrap(true);
  ui->label_editable->setTextInteractionFlags(
    Qt::TextEditorInteraction
  );
}

QtDialog::~QtDialog()
{
  delete ui;
}
