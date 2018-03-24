#include "stringlist.h"

StringList::StringList(QObject *parent) : QObject(parent)
{

}
void StringList::lista(QStringList liste)
{
    m_list=liste;
}

QStringList StringList::show()
{
    return m_list ;
}
