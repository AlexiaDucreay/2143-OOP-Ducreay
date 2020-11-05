
## H02

- Name: Alexia Ducreay
- Date: 22 Sep 2020
- Class: 2143 OOP

## Definitions

#### Class

> A Class is a user-defined data type, which holds its own data members and member functions,
> which can be accessed and used by creating an instance of that class. 
> A C++ class is like a blueprint for an object.
> For Example: Consider the Class of Cars. There may be many cars with different 
> names and brand but all of them will share some common properties like all of 
> them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the 
> class and wheels, speed limits, mileage are their properties. 
>
><img src="https://ds055uzetaobb.cloudfront.net/image_optimizer/722c82aff075a14313be7fa7463f7fedad151a0a.png" width=250>


#### Object
> An Object is an instance of a Class. When a class is defined,
> no memory is allocated but when it is instantiated (i.e. an object is created)
> memory is allocated.



#### Function
> A function is a group of statements that together perform a task. 
> Every C++ program has at least one function, which is main(), and all
> the most trivial programs can define additional functions.

#### Method
> Methods are functions that belongs to the class.

> There are two ways to define functions that belongs to a class:

* Inside class definition
* Outside class definition

#### Composition
> Composition is generally used when you want the features of an existing class inside
> your new class, but not its interface. That is, you embed an object to implement features
> of your new class, but the user of your new class sees the interface you’ve defined rather 
> than the interface from the original class. To do this, you follow the typical path of embedding
> private objects of existing classes inside your new class.

#### Iheritance
> Inheritance is the capability of a class to derive properties and characteristics from another class is
> called Inheritance. Inheritance is one of the most important feature of Object Oriented Programming.

**Sub Class**: The class that inherits properties from another class is called Sub class or Derived Class.

**Super Class**: The class whose properties are inherited by sub class is called Base Class or Super class.

#### Multiple Inheritance
> Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than
> one classes. i.e one sub class is inherited from more than one base classes.

#### Overloading 
> Creating two or more members that have the same name but are different in number or type of parameter 
> is known as overloading.
>
>**Types of overloading**
>
>**Function overloading**: is the process of having two or more functions with the same name, but different
>parameters, is known as function overloading.
>
>**Operator overloading**: is a compile-time polymorphism in which the operator is overloaded to provide 
>special meaning to the user-defined data type. Operator overloading is used to overload or redefine 
>most of the operators available in C++. It is used to perform the operation on the user-defined data type.

#### Polymorphism
>Polymorphism means "many forms", and it occurs when we have many 
>classes that are related to each other by inheritance.

#### Encapsulation
>Encapsulation is an Object Oriented Programming concept that binds
>together the data and functions that manipulate the data, and that
>keeps both safe from outside interference and misuse. 

#### Friend
>A friend class can access private and protected members of other class in which it is declared
>as friend. It is sometimes useful to allow a particular class to access private members of other class.
>For example a LinkedList class may be allowed to access private members of Node.

#### Abstraction
>Data abstraction refers to providing only essential information about the data to the outside world,
>hiding the background details or implementation.

#### Class Variable
>A class variable is any variable declared with the static modifier of which a single copy exists,
>regardless of how many instances of the class exist.

#### Instance Variable
>Instance variables are non-static variables and are declared in a class outside any method, constructor or block.




