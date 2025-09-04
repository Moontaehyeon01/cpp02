%%2025년도 2학기 c++ 프로그래밍 수업 원격 리포지토리



classDiagram

&nbsp;   class Company {

&nbsp;       -string name

&nbsp;       -string telephone

&nbsp;       +Company(string name, string telephone)

&nbsp;       +void print() const

&nbsp;   }

&nbsp;   

&nbsp;   class Product {

&nbsp;       -string name

&nbsp;       -double unitPrice

&nbsp;       +Product(string name, double unitPrice)

&nbsp;       +~Product()

&nbsp;       +double getPrice() const

&nbsp;   }

&nbsp;   

&nbsp;   class Invoice {

&nbsp;       -int invoiceNumber

&nbsp;       -double invoiceTotal

&nbsp;       +Invoice(int invoiceNumber)

&nbsp;       +~Invoice()

&nbsp;       +void add(int quantity, Product product)

&nbsp;       +void print() const

&nbsp;   }

&nbsp;   

&nbsp;   class Main {

&nbsp;       <<main>>

&nbsp;       +int main()

&nbsp;   }

&nbsp;  

&nbsp;   Invoice --> Product : uses

&nbsp;   Main --> Product : creates

&nbsp;   Main --> Invoice : creates

&nbsp;   Main --> Company : includes

