```mermaid

classDiagram

&nbsp;   class Animal {

&nbsp;       <<abstract>>

&nbsp;       +makeSound()\* void

&nbsp;   }

&nbsp;   

&nbsp;   class Dog {

&nbsp;       +makeSound() void

&nbsp;   }

&nbsp;   

&nbsp;   class Cat {

&nbsp;       +makeSound() void

&nbsp;   }

&nbsp;   

&nbsp;   class Main {

&nbsp;       <<main>>

&nbsp;       +main() int

&nbsp;   }

&nbsp;   

&nbsp;   %% 상속 관계

&nbsp;   Animal <|-- Dog : inherits

&nbsp;   Animal <|-- Cat : inherits

&nbsp;   

&nbsp;   %% Main에서 사용 (에러 발생)

&nbsp;   Main -.-> Animal : tries to instantiate (ERROR)

&nbsp;   

&nbsp;   %% 주석 설명

&nbsp;   note for Animal "Pure virtual function\\nmakeSound() = 0\\nCannot be instantiated"

&nbsp;   note for Main "Animal animal; // Compilation Error\\nCannot instantiate abstract class"

```

