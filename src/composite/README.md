# Composite

<img align="left" width="300" height="180" src="https://raw.githubusercontent.com/hamuryen/DesignPatterns/master/src/composite/uml.png">
The composite pattern describes a group of objects that are treated the same way as a single instance of the same type of object. The intent of a composite is to "compose" objects into tree structures to represent part-whole hierarchies. Implementing the composite pattern lets clients treat individual objects and compositions uniformly.

##### What problems can the Composite design pattern solve:
- A part-whole hierarchy should be represented so that clients can treat part and whole objects uniformly.
- A part-whole hierarchy should be represented as tree structure.
- How can a class control its instantiation?
- How can the number of instances of a class be restricted?

##### What solution does the Composite design pattern describe: 
- Define a unified `Component` interface for both part `Leaf` objects and whole `Composite` objects.
- Individual `Leaf` objects implement the `Component` interface directly, and `Composite` objects forward requests to their child components.

`Component` in code `Shape`
`Leaf` 		in code `Rectangle` and `Circle`
`Composite` in code `Group`

Reference: Wikipedia and GoF

Note: Explanations of pattern added to code files as comments.