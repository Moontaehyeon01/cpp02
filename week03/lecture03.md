## Pokemon Class Inheritance Diagram
```mermaid
classDiagram
    class Pokemon {
        +Pokemon()
        +~Pokemon()
        +attack() const
    }
    
    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +attack() const
    }
    
    Pokemon <|-- Pikachu : inherits
   ```