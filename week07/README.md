```mermaid

classDiagram

&nbsp;   class Person {

&nbsp;       +string name

&nbsp;   }

&nbsp;   

&nbsp;   class UndergraduateStudent {

&nbsp;       +double gpa

&nbsp;       +warn() void

&nbsp;   }

&nbsp;   

&nbsp;   class DormitoryStudent {

&nbsp;       +int roomNumber

&nbsp;       +warn() void

&nbsp;   }

&nbsp;   

&nbsp;   class UndergraduateDormitoryStudent {

&nbsp;       %% 상속받은 멤버들

&nbsp;       %% +string name (from Person)

&nbsp;       %% +double gpa (from UndergraduateStudent)  

&nbsp;       %% +int roomNumber (from DormitoryStudent)

&nbsp;       %% +warn() void (ambiguous - needs scope resolution)

&nbsp;   }

&nbsp;   

&nbsp;   %% 가상 상속 관계 (Diamond Problem 해결)

&nbsp;   Person <|-- UndergraduateStudent : "virtual public inheritance"

&nbsp;   Person <|-- DormitoryStudent : "virtual public inheritance"

&nbsp;   

&nbsp;   %% 다중 상속

&nbsp;   UndergraduateStudent <|-- UndergraduateDormitoryStudent : "public inheritance"

&nbsp;   DormitoryStudent <|-- UndergraduateDormitoryStudent : "public inheritance"

&nbsp;   

```

