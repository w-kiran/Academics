INSERT INTO department (Dname, Dnumber, Mgr_ssn, Mgr_start_date)
VALUES 
('HR', 1, NULL, '2010-01-01'),
('Finance', 2, NULL, '2012-05-15'),
('Engineering', 3, NULL, '2014-11-20');

INSERT INTO employee (Fname, Minit, Lname, Ssn, Bdate, Address, Sex, Salary, Super_ssn, Dno)
VALUES 
('Ram', 'K', 'Sharma', 2001, '1980-01-15', 'Bagbazar', 'Male', 60000.00, NULL, 1),
('Sita', 'P', 'Thapa', 2002, '1985-02-20', 'Koteshwor', 'Female', 75000.00, 2001, 2),
('Hari', 'D', 'Magar', 2003, '1975-03-30', 'Lalitpur', 'Male', 50000.00, 2002, 1),
('Gita', 'B', 'Shrestha', 2004, '1990-07-25', 'Baneshwor', 'Female', 68000.00, 2001, 3);

INSERT INTO project (Pname, Pnumber, Plocation, Dnum)
VALUES 
('Project A', 101, 'Kathmandu', 1),
('Project B', 102, 'Pokhara', 2),
('Project C', 103, 'Biratnagar', 3);

INSERT INTO works_on (Essn, Pno, Hours)
VALUES 
(2001, 101, 20.5),
(2002, 102, 35.0),
(2003, 103, 40.0),
(2004, 101, 25.0);

INSERT INTO dependent (Essn, dependent_name, Sex, Bdate, Relationship)
VALUES 
(2001, 'Ramesh Sharma', 'Male', '2005-09-10', 'Son'),
(2002, 'Anlisha Thapa', 'Female', '2010-12-25', 'Daughter'),
(2003, 'Bibek Magar', 'Male', '2008-07-14', 'Son'),
(2004, 'Sunita Shrestha', 'Female', '2012-11-05', 'Daughter');

INSERT INTO dept_locations (Dnumber, Dlocation)
VALUES 
(1, 'Kathmandu'),
(2, 'Pokhara'),
(3, 'Biratnagar');



