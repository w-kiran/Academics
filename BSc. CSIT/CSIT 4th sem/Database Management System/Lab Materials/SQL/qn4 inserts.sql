INSERT INTO student (id, name) 
VALUES 
(1, 'James Anderson'),
(2, 'Emily Clark'),
(3, 'Michael Johnson'),
(4, 'Sarah Wilson'),
(5, 'David Brown'),
(6, 'Laura Taylor'),
(7, 'Daniel Lewis'),
(8, 'Hector Martinez'),
(9, 'Sophia Robinson'),
(10, 'Oliver King');
SELECT * FROM student;

INSERT INTO subject (code, lecturer)
VALUES
('cs1500', 'Dr. Alice Cooper'),
('cs1200', 'Dr. Bob Green'),
('cs3020', 'Dr. Carol White'),
('cs3010', 'Dr. Derek Black'),
('cs2500', 'Dr. Fiona Adams');
SELECT * FROM subject;

INSERT INTO enrolledIn (id, code) 
VALUES 
(1, 'cs1500'),
(1, 'cs1200'),
(2, 'cs1500'),
(2, 'cs3010'),
(3, 'cs3020'),
(3, 'cs1200'),
(4, 'cs1500'),
(5, 'cs3010'),
(5, 'cs3020'),
(6, 'cs1500'),
(6, 'cs1200'),
(7, 'cs2500'),
(8, 'cs3020'),
(8, 'cs1500'),
(9, 'cs3010'),
(9, 'cs1500'),
(10, 'cs1200');

SELECT * FROM enrolledIn;

