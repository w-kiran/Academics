-- Insert records into Members table
INSERT INTO Members (mid, name, design, age) VALUES
(11, 'Hari Prasad', 'Professor', 55),
(12, 'Gita Sharma', 'Assistant Professor', 48),
(13, 'Mina Karki', 'Student', 22),
(14, 'Ramesh Thapa', 'Professor', 50);  -- New record

-- Insert records into Books table
INSERT INTO Books (Bid, Btitle, BAuthor, Bpublisher, Bprice) VALUES
(201, 'Nepali Literature', 'Laxmi Prasad Devkota', 'Ratna Pustak Bhandar', 450),  -- Price adjusted below 500
(202, 'Physics Fundamentals', 'Suresh Bhattarai', 'Ekta Books', 550),
(203, 'Introduction to Algorithms', 'Thomas H. Cormen', 'Asia Publication', 700), -- Price increased above 500
(204, 'Modern Physics', 'Albert Einstein', 'Asia Publication', 600);  -- New record

-- Insert records into Reserves table, including one on '2007-05-27'
INSERT INTO Reserves (mid, Bid, date) VALUES
(11, 201, '2024-09-01'),
(12, 202, '2024-09-02'),
(13, 203, '2024-09-03'),
(13, 201, '2007-05-27'),  -- Reservation on 27-May-2007
(14, 204, '2024-09-04');  -- New reservation by Professor

-- Display the records
SELECT * FROM Members;
SELECT * FROM Books;
SELECT * FROM Reserves;
