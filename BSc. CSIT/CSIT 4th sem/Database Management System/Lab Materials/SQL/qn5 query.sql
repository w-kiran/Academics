SELECT s.sname
FROM Student s
JOIN Enrolled e ON s.snum = e.snum
JOIN Class c ON e.cname = c.name
JOIN Faculty f ON c.fid = f.fid
WHERE s.level = 'JR' AND f.fname = 'I. Teach';

SELECT MAX(s.age) AS oldest_age
FROM Student s
WHERE s.major = 'History'
   OR EXISTS (
       SELECT 1
       FROM Enrolled e
       JOIN Class c ON e.cname = c.name
       JOIN Faculty f ON c.fid = f.fid
       WHERE e.snum = s.snum AND f.fname = 'I. Teach'
);

SELECT c.name
FROM Class c
LEFT JOIN Enrolled e ON c.name = e.cname
GROUP BY c.name, c.room
HAVING c.room = 'R128'
   OR COUNT(e.snum) >= 5;

SELECT s.level, AVG(s.age) AS average_age
FROM Student s
GROUP BY s.level;

SELECT s.sname
FROM Student s
LEFT JOIN Enrolled e ON s.snum = e.snum
WHERE e.snum IS NULL;