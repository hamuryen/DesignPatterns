# Decorator
<img align="left" width="300" height="180" src="https://raw.githubusercontent.com/hamuryen/DesignPatterns/master/src/decorator/uml.png">
The decorator pattern is a design pattern that allows behavior to be added to an individual object, dynamically, without affecting the behavior of other objects from the same class. The decorator pattern is often useful for adhering to the Single Responsibility Principle, as it allows functionality to be divided between classes with unique areas of concern. The decorator pattern is structurally nearly identical to the chain of responsibility pattern, the difference being that in a chain of responsibility, exactly one of the classes handles the request, while for the decorator, all classes handle the request. 

##### What problems can it solve:
- Responsibilities should be added to (and removed from) an object dynamically at run-time.
- A flexible alternative to subclassing for extending functionality should be provided.
- How can a class control its instantiation?
- How can the number of instances of a class be restricted?

##### What solution does it describe:
- Implement the interface of the extended decorated object `Component` transparently by forwarding all requests to it
- perform additional functionality before/after forwarding a request.

##### Output:
When you run the example you get an output like the one below.

```
Create Dough
Create Tomato
Create Cheese
Create Basil

Pizza price: 6.5

Delete Basil
Delete Cheese
Delete Tomato
Delete Dough
```

I tried to explain the pizza recipe example. Let's make a margarite all together. :)

Reference: Wikipedia and GoF

Note: Explanations of pattern added to code files as comments.