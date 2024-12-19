SELECT e.Fname, e.Minit, e.Lname, e.Address
FROM employee e
JOIN department d ON e.Dno = d.Dnumber
WHERE d.Dname = 'Research';

SELECT p.Pnumber, p.Dnum, e.Lname, e.Address, e.Bdate
FROM project p
JOIN department d ON p.Dnum = d.Dnumber
JOIN employee e ON d.Mgr_ssn = e.Ssn
WHERE p.Plocation = 'Stafford';

SELECT e.Fname, e.Minit, e.Lname
FROM employee e
WHERE NOT EXISTS (
    SELECT p.Pnumber
    FROM project p
    WHERE p.Dnum = 5
    AND NOT EXISTS (
        SELECT w.Essn
        FROM works_on w
        WHERE w.Essn = e.Ssn
        AND w.Pno = p.Pnumber
    )
);

SELECT DISTINCT p.Pnumber
FROM project p
LEFT JOIN works_on w ON p.Pnumber = w.Pno
LEFT JOIN employee e1 ON w.Essn = e1.Ssn
LEFT JOIN department d ON p.Dnum = d.Dnumber
LEFT JOIN employee e2 ON d.Mgr_ssn = e2.Ssn
WHERE e1.Lname = 'Smith' OR e2.Lname = 'Smith';

SELECT e.Fname, e.Minit, e.Lname
FROM employee e
JOIN dependent d ON e.Ssn = d.Essn
GROUP BY e.Ssn, e.Fname, e.Minit, e.Lname
HAVING COUNT(d.dependent_name) >= 2;

SELECT e.Fname, e.Minit, e.Lname
FROM employee e
JOIN department d ON e.Ssn = d.Mgr_ssn
WHERE EXISTS (
    SELECT 1
    FROM dependent dep
    WHERE dep.Essn = e.Ssn
);

SELECT e.Fname, e.Minit, e.Lname
FROM employee e
LEFT JOIN dependent d ON e.Ssn = d.Essn
WHERE d.Essn IS NULL;
