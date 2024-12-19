SET SQL_SAFE_UPDATES = 0;

SELECT B.Btitle
FROM Books B
JOIN Reserves R ON B.Bid = R.Bid
JOIN Members M ON R.mid = M.mid
WHERE M.design = 'Professor' AND M.age > 45;

SELECT DISTINCT M.mid
FROM Members M
WHERE M.mid NOT IN (
    SELECT R.mid
    FROM Reserves R
    JOIN Books B ON R.Bid = B.Bid
    WHERE B.Bprice > 500
);

SELECT B.BAuthor, B.Btitle
FROM Books B
JOIN Reserves R ON B.Bid = R.Bid
WHERE R.date = '2007-05-27';

SELECT M.name
FROM Members M
WHERE NOT EXISTS (
    SELECT B.Bid
    FROM Books B
    WHERE B.Bid NOT IN (
        SELECT R.Bid
        FROM Reserves R
        WHERE R.mid = M.mid
    )
);

UPDATE Books
SET Bprice = Bprice + 100
WHERE Bpublisher = 'Asia Publication' AND Bid IS NOT NULL;

DELETE FROM Members
WHERE age < 18;