#pragma once
#include <string>
using std::string;
class Document
{
private:
	string title;
	unsigned short pages;
	string ext;
public:
	Document();
	Document(string title, unsigned short pages, string ext);
	void show();
};

