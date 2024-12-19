create database qn2;
use qn2;

CREATE TABLE Members (
    mid INT PRIMARY KEY,
    name VARCHAR(100),
    design VARCHAR(50),
    age INT
);

CREATE TABLE Books (
    Bid INT PRIMARY KEY,
    Btitle VARCHAR(100),
    BAuthor VARCHAR(100),
    Bpublisher VARCHAR(100),
    Bprice DECIMAL(10, 2)
);

CREATE TABLE Reserves (
    mid INT,
    Bid INT,
    date DATE,
    PRIMARY KEY (mid, Bid),
    FOREIGN KEY (mid) REFERENCES Members(mid),
    FOREIGN KEY (Bid) REFERENCES Books(Bid)
);
