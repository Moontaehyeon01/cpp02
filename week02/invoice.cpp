#include "invoice.h"

Invoice::Invoice(int invNum)
	: invoiceNumber(invNum), invoiceTotal(0.0)
{
}
Invoice::~Invoice()
{
}
void Invoice::add(int quantity, Product product)
{
	invoiceTotal += quantity * product.getPrice();
}
void Invoice::print() const
{
	cout << "청구 번호: " << invoiceNumber << endl;
	cout << "청구 금액: " << invoiceTotal << endl;
}