#ifndef STRINGLIST_H
#define STRINGLIST_H

#include <QObject>

class StringList : public QObject
{
    Q_OBJECT
public:
    explicit StringList(QObject *parent = nullptr);
  void lista(QStringList liste);
 Q_INVOKABLE QStringList show();
 private :
  QStringList m_list;
};

#endif // STRINGLIST_H
