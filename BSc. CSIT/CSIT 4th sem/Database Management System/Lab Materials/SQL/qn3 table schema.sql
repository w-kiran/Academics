CREATE DATABASE qn3;
USE qn3;

CREATE TABLE Supplier (
    supplier_id INT PRIMARY KEY, 
    supplier_name VARCHAR(255) NOT NULL,
    city VARCHAR(100)
);

CREATE TABLE Parts (
    part_id INT PRIMARY KEY,  
    part_name VARCHAR(255) NOT NULL,
    color VARCHAR(50), 
    weight DECIMAL(10, 2)
);

CREATE TABLE Supplies (
    supplier_id INT,
    part_id INT,
    quantity INT,
    PRIMARY KEY (supplier_id, part_id),
    FOREIGN KEY (supplier_id) REFERENCES Supplier(supplier_id),
    FOREIGN KEY (part_id) REFERENCES Parts(part_id)
);
