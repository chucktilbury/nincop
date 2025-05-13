# NINCOP
"NINCOP is not C or Python". (pronounced nin'-in-cop", or nin'-lang)

Programming language for people who want something a little different. NINCOP takes features from other languages and rejects some and incorporates others into a languate that anyone who already knows how to write code in any C-like language or any Python-like language can become productive in minutes. It is intended to be as simple as possible but still allow just about anything to be implemented.

## Supported Features
* Compiled (with ANSI C as the IR)
* Access to external libraries.
* Raw inline of C code.
* Imported libraries written in NINCOP.
* Function overrides.
* Managed memory.
* Exceptions.
* Native formatted strings.
* Lists and hashes holding arbitrary types.
* User defined types with scoped methods and data.
* Inheritance.
* Namespaces.
* Operator overloading.
* Strong types with casting.

## Unsupported Features
* Pointers

## Object Model
In NINCOP, all types are treated as objects where methods are called upon them. 

### Operators
All operators map to a pre-defined internal function. If the operator function is not supported, it throws an ``UNSUPPORTED_OPERATOR`` exception. Operators are overridden by defining these functions in the user-defined type.

### Constructors/destructors
Constructors are called ``_create_`` and destructors are called ``_destroy_``, which are treated as operators. Constructors are overridden by parameter type. User-defined constructors are called after the internal default constructor. When an object is created, the applicable attributes and methods are copied to the child class before the default constructor is called. When the defined constructor is called, the attributes and methods that were in the base class are now in the derived class. Methods and attributes that are duplicated by the derived class are still accessible using the ``dot (.)`` operator with the name of the defining class.

