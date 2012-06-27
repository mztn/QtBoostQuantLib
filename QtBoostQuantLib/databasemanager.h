// http://www.developer.nokia.com/Community/Wiki/CS001504_-_Creating_an_SQLite_database_in_Qt

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QFile>

class DatabaseManager : public QObject
{
public:
	DatabaseManager(QObject *parent = 0);
	~DatabaseManager();

public:
	bool openDB();
	bool deleteDB();
	QSqlError lastError();

private:
	QSqlDatabase db;
};