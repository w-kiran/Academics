SELECT supplier_name
FROM Supplier
WHERE city = 'Kathmandu';

SELECT DISTINCT p.part_name
FROM Parts p
JOIN Supplies s ON p.part_id = s.part_id
JOIN Supplier sup ON s.supplier_id = sup.supplier_id
WHERE sup.supplier_name = 'ABC Company';


SELECT DISTINCT p.part_name
FROM Parts p
JOIN Supplies s ON p.part_id = s.part_id
WHERE s.quantity > 300;


SELECT COUNT(DISTINCT s.part_id) AS num_parts
FROM Supplies s
JOIN Supplier sup ON s.supplier_id = sup.supplier_id
WHERE sup.supplier_name = 'ABC Company';


SELECT sup.supplier_name
FROM Supplies s
JOIN Supplier sup ON s.supplier_id = sup.supplier_id
GROUP BY sup.supplier_id, sup.supplier_name
HAVING COUNT(DISTINCT s.part_id) > 30;

