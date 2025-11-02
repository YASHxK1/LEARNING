#4.insert
INSERT INTO emp 
# single insert 
values (1,"YASH","KARLE", 25.50, "2023-01-02");
#multi insert
insert into emp
values  (2, "Squidward", "Tentacles", 15.00, "2023-01-03"),
		(3, "Spongebob", "Squarepants", 12.50, "2023-01-04"),
		(4, "Patrick", "Star", 12.50, "2023-01-05"),
		(5, "Sandy", "Cheeks", 17.25, "2023-01-06");
        
#inert specefic
insert into emp(empid,firstname,lastname)
values (6,"sheldon","plantok");

SELECT * FROM EMP ;