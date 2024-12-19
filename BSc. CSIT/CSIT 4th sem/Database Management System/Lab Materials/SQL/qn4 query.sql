SELECT student.name
FROM student
JOIN enrolledIn ON student.id = enrolledIn.id
WHERE enrolledIn.code = 'cs3020';

SELECT subject.code
FROM subject
JOIN enrolledIn ON subject.code = enrolledIn.code
JOIN student ON student.id = enrolledIn.id
WHERE student.name = 'Hector Martinez';

SELECT lecturer
FROM subject
WHERE code = 'cs1500';

SELECT lecturer
FROM subject
WHERE code = 'cs1500' OR code = 'cs3020';

SELECT lecturer
FROM subject
GROUP BY lecturer
HAVING COUNT(DISTINCT code) >= 2;

SELECT DISTINCT student.name
FROM student
JOIN enrolledIn ON student.id = enrolledIn.id
WHERE enrolledIn.code = 'cs1500' OR enrolledIn.code = 'cs3010';

SELECT student.name
FROM student
JOIN enrolledIn e1 ON student.id = e1.id
JOIN enrolledIn e2 ON student.id = e2.id
WHERE e1.code = 'cs1500' AND e2.code = 'cs1200';

SELECT student.name
FROM student
JOIN enrolledIn ON student.id = enrolledIn.id
GROUP BY student.name
HAVING COUNT(DISTINCT enrolledIn.code) >= 2;

SELECT code
FROM subject;

SELECT name
FROM student;

SELECT student.name
FROM student
JOIN enrolledIn ON student.id = enrolledIn.id
WHERE enrolledIn.code = 'cs1500';

SELECT DISTINCT student.name
FROM student
JOIN enrolledIn ON student.id = enrolledIn.id
JOIN subject ON enrolledIn.code = subject.code
WHERE subject.lecturer = 'Dr. James Morgan';

SELECT DISTINCT student.name
FROM student
JOIN enrolledIn ON student.id = enrolledIn.id
JOIN subject ON enrolledIn.code = subject.code
WHERE subject.lecturer <> 'Dr. James Morgan';



