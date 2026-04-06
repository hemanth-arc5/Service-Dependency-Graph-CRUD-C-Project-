 ## Service Dependency Graph CRUD (C Project)

##  Team Members

* Hemanth
* Vishnu

---

##  Project Title

**Service Dependency Graph CRUD**

---

## Problem Statement

In modern cloud environments, multiple services depend on each other. Managing these dependencies is critical to ensure system stability.
This project implements a **Service Dependency Graph** using C to efficiently manage service relationships with full CRUD operations.

---

##  Real-World Application

This system simulates cloud infrastructure (like AWS, Azure, Kubernetes), where:

* Services depend on other services
* Failure in one service affects others
* Dependency tracking is essential

---

##  Data Structure Used

**Graph (Adjacency List Representation)**

* Each node represents a **service**
* Each edge represents a **dependency**
* Implemented using:

  * `struct`
  * Linked Lists
  * Dynamic Memory Allocation (`malloc`, `free`)
 
---
## Basic Idea(graph)

<img width="1200" height="800" alt="image" src="https://github.com/user-attachments/assets/d31862d3-9d7b-4a2c-b52e-8641cb02524d" />



---

## Features (CRUD Operations)

###  Create

* Add new service
* Add dependency between services

###  Read

* Display all services and dependencies
* Search for a service

###  Update

* Rename an existing service
* Automatically updates dependencies

###  Delete

* Remove a service
* Remove all related dependencies

---

##  System Design

* Graph implemented using adjacency list
* Array stores service names
* Linked list stores dependencies

Example:
Auth → Database → Logging
Payment → Auth

---

##  Algorithm Overview

### Add Service

* Check if service exists
* Insert into array

### Add Dependency

* Find source & destination
* Add node to linked list

### Delete Service

* Remove all incoming edges
* Free memory
* Shift array

### Display Graph

* Traverse adjacency list
* Print dependencies

---

##  Compilation & Execution

```bash
gcc main.c -o project
./project
```

---

##  Sample Output

---

##  Technologies Used

* C Programming Language
* GCC Compiler
* Data Structures (Graph, Linked List)

---

##  Demo Video

 Google Drive Link: *(-----------)*

---

##  Future Enhancements

* Graphical User Interface (GUI)
* Cycle detection in dependencies
* Real-time cloud integration
* Visualization of graph

---

##  Conclusion

This project demonstrates how graphs can be used to efficiently manage service dependencies in cloud systems. It provides a practical implementation of CRUD operations using C and dynamic memory allocation.

---

---

##  Menu Options

1. Add Service
2. Add Dependency
3. Delete Service
4. Update Service
5. Search Service
6. Display Graph
7. Exit 

---
## Code Output

* Main Menu

<img width="160" height="156" alt="Screenshot 2026-04-06 211013" src="https://github.com/user-attachments/assets/9432e293-37ab-4d72-9a7c-d7e002c65a8f" />

* Add Service
  
<img width="284" height="83" alt="Screenshot 2026-04-06 221028" src="https://github.com/user-attachments/assets/4c61a312-9a69-43ab-98ae-11f65b58decd" />


* Add Dependency

<img width="334" height="87" alt="Screenshot 2026-04-06 221059" src="https://github.com/user-attachments/assets/ec285637-a664-47ba-9f7c-0021090a8e45" />

 
* Delete Service
  
<img width="337" height="78" alt="Screenshot 2026-04-06 221430" src="https://github.com/user-attachments/assets/b326d1ef-9bc0-4d83-b6e1-7dd9c2db2bcf" />

 Before

<img width="426" height="101" alt="Screenshot 2026-04-06 221348" src="https://github.com/user-attachments/assets/fc27af57-dbbb-405d-a72e-6101d5a88a13" />


 After

<img width="333" height="79" alt="Screenshot 2026-04-06 221436" src="https://github.com/user-attachments/assets/67fe5964-967b-44b8-917a-b99aff4dae32" />


* Update Srevice

<img width="267" height="91" alt="Screenshot 2026-04-06 222901" src="https://github.com/user-attachments/assets/0bd50b9c-eaed-4131-8a7a-4d2259854b7e" />
 
 Before

<img width="333" height="79" alt="Screenshot 2026-04-06 221436" src="https://github.com/user-attachments/assets/b14c62c1-9b70-4565-b067-c1ef6614d5fe" />


  After

<img width="301" height="69" alt="Screenshot 2026-04-06 221503" src="https://github.com/user-attachments/assets/f69b1dde-0b9b-4f67-a3ca-a19155d2d33a" />
 
* Search Service

<img width="361" height="79" alt="Screenshot 2026-04-06 221517" src="https://github.com/user-attachments/assets/7b94a37f-69ab-4cc3-add4-d73936e50107" />

<img width="321" height="46" alt="Screenshot 2026-04-06 221529" src="https://github.com/user-attachments/assets/2f1049b3-2de4-4100-ab58-a53c6f1bc3d8" />

* Display

<img width="305" height="85" alt="Screenshot 2026-04-06 221540" src="https://github.com/user-attachments/assets/a822e025-5445-4217-b62a-e30c74815516" />

 
* Exist

<img width="149" height="44" alt="Screenshot 2026-04-06 210717" src="https://github.com/user-attachments/assets/492a0485-a833-4dec-8736-b9a694f2c4de" />






