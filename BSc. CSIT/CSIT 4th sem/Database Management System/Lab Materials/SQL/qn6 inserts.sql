INSERT INTO department (Dname, Dnumber, Mgr_ssn, Mgr_start_date)
VALUES 
('Research', 1, NULL, '2020-01-01'),
('Sales', 2, NULL, '2019-03-15'),
('Development', 3, NULL, '2021-06-10');

INSERT INTO employee (Fname, Minit, Lname, Ssn, Bdate, Address, Sex, Salary, Super_ssn, Dno)
VALUES 
('John', 'B', 'Smith', 123456789, '1980-06-15', '123 Elm St', 'M', 50000.00, NULL, 1),
('Jane', 'A', 'Doe', 234567890, '1985-04-20', '456 Maple Ave', 'F', 60000.00, 123456789, 2),
('Alice', 'C', 'Johnson', 345678901, '1990-09-10', '789 Oak St', 'F', 55000.00, 234567890, 3),
('Robert', 'D', 'Brown', 456789012, '1975-12-25', '321 Pine Rd', 'M', 70000.00, 123456789, 1),
('Michael', 'E', 'Davis', 567890123, '1982-11-05', '654 Birch Blvd', 'M', 80000.00, NULL, 2);

INSERT INTO project (Pname, Pnumber, Plocation, Dnum)
VALUES 
('Project Alpha', 1, 'Stafford', 1),
('Project Beta', 2, 'Houston', 2),
('Project Gamma', 3, 'Stafford', 1),
('Project Delta', 4, 'New York', 3);

INSERT INTO works_on (Essn, Pno, Hours)
VALUES 
(123456789, 1, 20.00),
(234567890, 2, 30.00),
(345678901, 3, 25.00),
(456789012, 1, 15.00),
(567890123, 4, 35.00),
(123456789, 3, 10.00);

INSERT INTO dependent (Essn, dependent_name, Sex, Bdate, Relationship)
VALUES 
(123456789, 'Sara', 'F', '2010-08-12', 'Daughter'),
(234567890, 'Tom', 'M', '2012-11-14', 'Son'),
(234567890, 'Emma', 'F', '2015-02-20', 'Daughter'),
(345678901, 'Jake', 'M', '2017-05-15', 'Son'),
(567890123, 'Lily', 'F', '2019-07-22', 'Daughter');

INSERT INTO dept_locations (Dnumber, Dlocation)
VALUES 
(1, 'Stafford'),
(2, 'Houston'),
(3, 'New York');
