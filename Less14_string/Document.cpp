#include "Document.h"
#include <iostream>
using std::cout;
using std::endl;
Document::Document()
{
}
Document::Document(string title, unsigned short pages, string ext)
{
	this->title = title;
	this->pages = pages;
	this->ext = ext;
}
void Document::show()
{
	cout << title << " " << ext << " " << pages << endl;
}