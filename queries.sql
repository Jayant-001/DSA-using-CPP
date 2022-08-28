show databases;
create database if not exists temp;
use temp;

create table worker ( 
	worker_id INT(23) NOT NULL PRIMARY KEY AUTO_INCREMENT, 
		f_name CHAR(25), 
		l_name CHAR(25), 
		salary INT(15), 
		joining_date DATETIME, 
		dept CHAR(25) 
    );

desc worker;

INSERT INTO worker VALUES 
		(01, "JAYANT", "GUPTA", 10000, "14-02-20 07.25.00", "HR"), 
        (02, "AMAN", "GUPTA", 10320, "16-12-20 07.25.00", "PR"), 
        (03, "AKASH", "ARORA", 13400, "14-011-22 07.25.00", "QR"), 
        (04, "SANJEEV", "KUMAR", 32300, "12-05-20 07.25.00", "TR"), 
        (05, "ROHIT", "VERMA", 3250, "15-02-22 07.25.00", "AR");

SELECT * FROM worker;

CREATE TABLE Bonus ( 
		worker_ref_id int, 
		bonus_amount int(10), 
		bonus_date DATETIME, 
		FOREIGN KEY (worker_ref_id) REFERENCES Worker(worker_id) ON DELETE CASCADE 
    );

INSERT INTO Bonus VALUES 
		(01, 5000, '16-02-20'), 
		(02, 1000, '13-02-20'), 
        (03, 1200, '16-05-20'), 
        (04, 5320, '16-02-22'), 
        (05, 1000, '16-12-21');
        
SELECT * FROM Bonus;

CREATE TABLE Title ( 
		WORKER_REF_ID INT, 
		WORKER_TITLE CHAR(25), 
		AFFECTED_FORM DATETIME, 
        FOREIGN KEY (WORKER_REF_ID) REFERENCES Worker(worker_id) ON DELETE CASCADE 
	);

INSERT INTO Title VALUES 
		(01, "MANAGER", "2016-02-20 00:00:00"), 
		(02, "EXECUTIVE", "2012-02-10 00:00:00"), 
		(03, "EXECUTIVE", "2016-02-20 00:00:00"), 
		(04, "EMPLOYEE", "2018-02-20 00:00:00"), 
		(05, "INTERN", "2020-02-20 00:00:00");

SELECT * FROM worker;
-- where
SELECT * FROM worker WHERE salary <= 10000;
SELECT * FROM Bonus;
SELECT * from Title;

-- order by
SELECT * FROM worker ORDER BY f_name;
SELECT * FROM worker ORDER BY f_name DESC;

-- wildcard / pattern matching
-- -> '_' denote only 1 character and '%' denote any number of characters
SELECT * FROM worker where f_name LIKE '_a%';





