create database db_kiran;
use db_kiran;

create table employee(
Fname varchar(30), 
Minit varchar(40), 
Lname varchar(40),
Ssn int primary key, 
Bdate date, 
Address varchar(60), 
Sex varchar(7), 
Salary decimal(6,2), 
Super_ssn int, 
Dno int);

create table department(
Dname varchar(30),
Dnumber int primary key,
Mgr_ssn int, 
Mgr_start_date date,
foreign key(mgr_ssn) references employee(ssn) on delete set NULL);

ALTER TABLE employee MODIFY Salary DECIMAL(8,2);
alter table employee add foreign key(Dno) references
department(Dnumber) on delete set NULL;
alter table employee add foreign key(Super_ssn) references
employee(ssn) on delete set NULL;

create table project(
Pname varchar(50),
Pnumber int primary key,
Plocation varchar(50),
Dnum int,
foreign key(Dnum) references department(Dnumber) on delete set NULL);

create table works_on(
Essn int, 
Pno int, 
Hours decimal(5,2),
primary key(Essn,Pno),
foreign key(Essn) references employee(ssn) on delete cascade,
foreign key(Pno) references project(Pnumber) on delete cascade);

create table dependent(
Essn int, 
dependent_name varchar(50),
Sex varchar(7),
Bdate date,
Relationship varchar(40),
primary key(Essn,Dependent_name),
foreign key(Essn) references employee(ssn) on delete cascade);

create table dept_locations(
Dnumber int,
Dlocation varchar(40),
primary key(Dnumber,Dlocation),
foreign key(Dnumber) references department(Dnumber)); 

update department 
set Mgr_ssn = 2002
where dnumber =1;

update department 
set Mgr_ssn = 2001
where dnumber =2;

update department 
set Mgr_ssn = 2003
where dnumber =3;
