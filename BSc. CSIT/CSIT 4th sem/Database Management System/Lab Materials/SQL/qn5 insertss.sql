INSERT INTO Student (snum, sname, major, level, age)
VALUES 
(1001, 'Suman Acharya', 'Computer Science', 'JR', 22),
(1002, 'Amelia Brown', 'Mathematics', 'JR', 21),
(1003, 'Hans Müller', 'History', 'SR', 25),
(1004, 'Pooja Sharma', 'History', 'SO', 19);

INSERT INTO Faculty (fid, fname, deptid)
VALUES 
(2001, 'Dr. Olivia Thompson', 1),
(2002, 'Prof. Peter Schmidt', 2),
(2003, 'I. Teach', 3),
(2004, 'Dr. Ravi Koirala', 4);

INSERT INTO Class (name, meets_at, room, fid)
VALUES 
('CS101', '09:00:00', 'Room 101', 2001),
('MATH202', '10:30:00', 'Room 202', 2002),
('PHYS303', '13:00:00', 'Room 303', 2003),
('HIST404', '15:00:00', 'R128', 2004);

INSERT INTO Enrolled (snum, cname)
VALUES 
(1001, 'CS101'),
(1002, 'PHYS303'),
(1003, 'HIST404'),
(1004, 'PHYS303');


Select *from Student;
Select *from Faculty;
Select *from Class;
Select *from Enrolled;
