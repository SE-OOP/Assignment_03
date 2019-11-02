### Assignment_03_20191025
#### The third OOP assignment on Oct 25, 2019
#### Deadline is 8:00PM Nov 1, 2019

---------------------------------------
#### Requirements
1. Separating interface from implementation: e.g. Three files: Ex03_13.cpp, Invoice.cpp, Invoice.h are needed  in your folder. You are responsible for creating directiries as follows.
   Assignment_03/201806040199/Ex03_13/Ex03_13.cpp
   Assignment_03/201806040199/Ex03_13/Invoice.cpp
   Assignment_03/201806040199/Ex03_13/Invoice.h
2. Using Pascal case and Camel case for naming your classes and objects respectively.
3. C-style input/output is not allowed!
4. Commenting code is necessary!
---------------------------------------

#### P75-76
3.13 (Invoice Class) Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. An Invoice should include four data members—a part number (type string), a part description (type string), a quantity of the item being purchased (type int) and a price per item (type int). [Note: In subsequent chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—called floating-point values—to represent dollar amounts.] Your class should have a constructor that initializes the four data members. A constructor that receives multiple arguments is defined with the form: ClassName( TypeName1 parameterName1, TypeName2 parameterName2, ... ) Provide a set and a get function for each data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0. Write a test  program that demonstrates class Invoice’s capabilities.

3.15 (Date Class) Create a class called Date that includes three pieces of information as data members—a month (type int), a day (type int) and a year (type int). Your class should have a constructor with three parameters that uses the parameters to initialize the three data members. For the purpose of this exercise, assume that the values provided for the year and day are correct, but ensure that the month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get function for each data member. Provide a member funcion displayDate that displays the month, day and year separated by forward slashes (/). Write a test program that demonstrates class Date’s capabilities.

