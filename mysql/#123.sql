USE ykDB;
-- this is comment

-- tables 
#how to create a table 
create table emp(id
empid int,
firstname varchar(50),
lastname varchar(50),
hourlypay decimal(5,2),
hiredate date
);
#how to drop a table
drop table emp;
# select tabe 
select * from emp;
# rename 
rename table emp to workers 
rename workers to emp 
# alter table 
alter table emp
add phone_number varchar(15);

alter table emp 
drop column phone_number;
