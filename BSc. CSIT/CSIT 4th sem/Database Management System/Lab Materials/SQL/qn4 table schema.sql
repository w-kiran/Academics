Create Database qn4_kiran;
Use qn4_kiran;

CREATE TABLE student (
    id INT PRIMARY KEY,
    name VARCHAR(100)
);

CREATE TABLE subject (
    code VARCHAR(10) PRIMARY KEY,
    lecturer VARCHAR(100)
);

CREATE TABLE enrolledIn (
    id INT,
    code VARCHAR(10),
    PRIMARY KEY (id, code),
    FOREIGN KEY (id) REFERENCES student(id),
    FOREIGN KEY (code) REFERENCES subject(code)
);

