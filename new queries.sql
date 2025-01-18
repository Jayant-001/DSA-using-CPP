show databases;
CREATE DATABASE IF NOT EXISTS mydb;
use mydb;

create table worker ( 
	worker_id INT(23) NOT NULL PRIMARY KEY AUTO_INCREMENT, 
		f_name CHAR(25), 
		l_name CHAR(25), 
		salary INT(15), 
		joining_date DATETIME, 
		dept CHAR(25) 
    );

DROP TABLE Worker;
show tables;

INSERT INTO Worker VALUE (1, "Jayant", "Kumar", 200000, "10-02-23 12:20:00", "SE");

INSERT INTO worker VALUES 
		(01, "JAYANT", "GUPTA", 10000, "14-02-20 07.25.00", "HR"), 
        (02, "AMAN", "GUPTA", 10320, "16-12-20 07.25.00", "PR"), 
        (03, "AKASH", "ARORA", 13400, "14-011-22 07.25.00", "QR"), 
        (04, "SANJEEV", "KUMAR", 32300, "12-05-20 07.25.00", "TR"), 
        (05, "ROHIT", "VERMA", 3250, "15-02-22 07.25.00", "AR");
        
INSERT INTO worker VALUES 
		(09, "Karkik", "Yadav", 500000, "14-02-18 07.25.00", "HR");

truncate Worker;
SELECT lcase(f_name) FROM Worker;
DESCRIBE Worker;
select * from worker;
select * from worker order by salary desc limit 2;
-- distinct
select distinct dept from worker;

select dept, avg(salary) from worker where f_name = 'jayant' group by dept;

-- Having
select dept, sum(salary), count(dept) from worker group by dept having count(dept) > 1;


-- Foreign key
CREATE TABLE Customer (
	id integer primary key,
    Name varchar(40),
    Address varchar(50),
    Gender char(2),
    City varchar(225),
    Pincode integer
);

-- alter
ALTER TABLE Customer ADD age integer;
ALTER TABLE Customer MODIFY age int;
ALTER TABLE Customer CHANGE COLUMN name Cust_name int;
ALTER TABLE Customer DROP COLUMN age;

desc Customer;

CREATE TABLE Order_details (
	order_id integer primary key,
    delivery_date DATE,
    cust_id integer,
    FOREIGN KEY(cust_id) references Customer(id)
);
show tables;

ALTER TABLE Customer CHANGE COLUMN Cust_name C_name varchar(50);
-- Data Modification Language
INSERT INTO Customer (id, C_name, Address, Gender, City, Pincode) VALUE (01, "Aakash", "DLN", "M", "DLN DLN", 102020);
INSERT INTO Customer (id, C_name, Address, Gender, City, Pincode) VALUES
 (02, "SUpriya", "Varanasi", "F", "UPP", 101010),
 (03, "Anushka", "ZNA", "F", "Zamania", 101020),
 (05, "Raj", "DLN", "M", "DLN DLN", 102020) ;
INSERT INTO Customer VALUES 
	(6, "Raman", "Delhi", "F", "Delhi 6", 94303), 
	(7, "Arunesh", "Delhi", "M", "Mumbai", 8312), 
	(8, "Suraj", "Delhi", "M", "Delhi 328", 903);
 
 -- Update
SET SQL_SAFE_UPDATES = 0;
UPDATE Customer SET City = "Dildarnagar" WHERE City = "DLN DLN";

-- DELETE
DELETE FROM Customer WHERE id = 3;

-- Foreign key 
show tables;
drop table Customer;
drop table order_details;

CREATE TABLE Customer (id integer primary key, name varchar(20), address varchar(40));
CREATE TABLE Order_details (id integer primary key, amount integer, cust_id integer, foreign key(cust_id) references Customer(id) ON DELETE CASCADE ON UPDATE CASCADE);
desc Customer;
desc Order_details;

INSERT INTO Customer VALUES (10, "Jaya", "DLN"), (11, "Akash", "DDU"), (14, "Pawan", "Delhi"), (13, "Pappu", "Nagsar");
SELECT * FROM Customer;
INSERT INTO Order_details VALUES (110, 391, 10), (115, 391, 11), (114, 391, 14), (113, 391, 13);

UPDATE Customer SET id = 111 where id = 11;
DELETE FROM Order_details WHERE id = 110 or id = 114;

-- Joins

-- 1. Inner Join
select Customer.*, Order_details.* from Customer inner join Order_details on Customer.id = Order_details.cust_id;


-- SET operations
select * from customer union select * from order_details;
SELECT * FROM Order_details;
SELECT * FROM Customer;