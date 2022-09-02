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
        
INSERT INTO worker VALUES 
		(06, "Sohail", "Verma", 13200, "12-02-21 07.25.00", "HR"), 
        (07, "Imran", "Khan", 18320, "16-12-20 07.25.00", "PR"), 
        (08, "Rajeev", "Kumar", 28320, "1-6-21 07.25.00", "AR");
        
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

-- order by (sorting) || by default -> ASC
SELECT * FROM worker ORDER BY f_name;
SELECT * FROM worker ORDER BY salary;
SELECT * FROM worker ORDER BY f_name DESC;

-- wildcard / pattern matching
-- -> '_' denote only 1 character and '%' denote any number of characters
SELECT * FROM worker where f_name LIKE '_a%';

-- DISTINCT
SELECT DISTINCT dept FROM worker;

-- Data grouping -> used for Aggregation (eg, couting purpose)
-- without agregation function (count()) GROUP BY will work as DISTINCT keywork
-- apply same column set after SELECT keywork as given in GROUP BY solumn set
SELECT dept, count(dept) FROM worker GROUP BY dept;

-- some examples of aggregation
-- avg salary department wise
select dept, avg(salary) FROM worker GROUP BY dept;
select dept, min(salary) FROM worker GROUP BY dept;
select dept, max(salary) FROM worker GROUP BY dept;
select dept, sum(salary) FROM worker GROUP BY dept;

-- HAVING -> used to apply filtering in GROUP BY function
SELECT dept, count(dept) FROM worker GROUP BY dept HAVING count(dept) > 1;

-- CHECK, DEFAULT
create table student (
	id int primary key,
    name varchar(50) unique,
    age int,
    branch varchar(40) DEFAULT "CSE",
    CONSTRAINT age CHECK(age > 18)
);

DESC student;
INSERT INTO student VALUE
	(1, 'KESHAV', 19, "EC");
    
INSERT INTO student(id, name, age) VALUE
	(2, 'KARAN', 19);

TRUNCATE student;
DROP table student;
SELECT * FROM student;

-- Add new column
ALTER TABLE student ADD class INT NOT NULL DEFAULT 1;

-- MODIFY
ALTER TABLE student MODIFY age INT NOT NULL DEFAULT 16;

-- CHANGE COLUMN -> RENAME THE COLUMN
ALTER TABLE student CHANGE COLUMN class stu_class INT;

-- DROP COLUMN
ALTER TABLE student DROP COLUMN stu_class;




