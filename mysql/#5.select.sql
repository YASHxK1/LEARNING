#5.select 
select * from emp;
select firstname,lastname from emp;

select * from emp where empid=2;

select * from emp where firstname="Spongebob";

select * from emp where hourlypay >=15;
select * from emp where hiredate <= "2023-01-03";

select * from emp where empid != 1;
select * from emp where hiredate is null;
select * from emp where hiredate is not null;
