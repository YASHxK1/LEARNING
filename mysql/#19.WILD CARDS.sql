#19.WILD CARDS
-- (%)
select * from emp
where firstname like "sp%";
select * from emp
where lastname like "%r";

-- (_)
select * from emp
where job like "_ook%";

select * from emp
where hiredate like "____-01-__";

-- combined
select * from emp
where job like "_a%";
