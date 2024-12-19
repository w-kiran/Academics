Create database kiran_qn5;
use kiran_qn5;

CREATE TABLE Student (
    snum INTEGER PRIMARY KEY,
    sname VARCHAR(255) NOT NULL,
    major VARCHAR(255),
    level VARCHAR(255),
    age INTEGER
);

CREATE TABLE Faculty (
    fid INTEGER PRIMARY KEY,
    fname VARCHAR(255) NOT NULL,
    deptid INTEGER
);

CREATE TABLE Class (
    name VARCHAR(255) PRIMARY KEY,
    meets_at TIME,
    room VARCHAR(255),
    fid INTEGER,
    FOREIGN KEY (fid) REFERENCES Faculty(fid)
);

CREATE TABLE Enrolled (
    snum INTEGER,
    cname VARCHAR(255),
    PRIMARY KEY (snum, cname),
    FOREIGN KEY (snum) REFERENCES Student(snum),
    FOREIGN KEY (cname) REFERENCES Class(name)
);

