-- Insert into Supplier table
INSERT INTO Supplier (supplier_id, supplier_name, city) 
VALUES
(1, 'ABC Company', 'Kathmandu'),
(2, 'XYZ Ltd.', 'Kathmandu'),
(3, 'Global Inc.', 'Lalitpur'),
(4, 'Universal Parts', 'Kathmandu'),
(5, 'Mountain Supplies', 'Bhaktapur');

-- Insert into Parts table
INSERT INTO Parts (part_id, part_name, color, weight) 
VALUES
(1, 'Screwdriver', 'Blue', 0.10),
(2, 'Wrench', 'Red', 0.20),
(3, 'Pliers', 'Yellow', 0.15),
(4, 'Hammer', 'Black', 0.75),
(5, 'Drill', 'Silver', 1.20),
(6, 'Saw', 'Green', 0.60),
(7, 'Tape Measure', 'Orange', 0.30),
(8, 'Level', 'Purple', 0.40);

-- Insert into Supplies table
INSERT INTO Supplies (supplier_id, part_id, quantity)
VALUES
(1, 1, 500),
(1, 2, 300),
(1, 3, 150),
(2, 4, 400),
(2, 5, 100),
(3, 6, 250),
(3, 7, 350),
(4, 8, 200),
(5, 1, 120),
(5, 3, 320); 

SELECT * FROM Supplier;
SELECT * FROM Parts;
SELECT * FROM Supplies;

