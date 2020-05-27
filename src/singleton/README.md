# Singleton

![Singleton UML](https://github.com/hamuryen/DesignPatterns/src/singleton/uml.png)

The singleton pattern is a software design pattern that restricts the instantiation of a class to one "single" instance. This is useful when exactly one object is needed to coordinate actions across the system.


##### The singleton design pattern solves problems like
- How can it be ensured that a class has only one instance?
- How can the sole instance of a class be accessed easily?
- How can a class control its instantiation?
- How can the number of instances of a class be restricted?

##### The singleton design pattern describes how to solve such problems: 
- Hide the constructor of the class.
- Define a public static operation `GetInstance()` that returns the sole instance of the class.