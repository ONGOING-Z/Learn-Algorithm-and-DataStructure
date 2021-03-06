# 题目描述
# 统计出当前(titles.to_date='9999-01-01')各个title类型对应的员工当前(salaries.to_date='9999-01-01')薪水对应的平均工资。结果给出title以及平均工资avg。
# CREATE TABLE `salaries` (
#     `emp_no` int(11) NOT NULL,
#     `salary` int(11) NOT NULL,
#     `from_date` date NOT NULL,
#     `to_date` date NOT NULL,
#     PRIMARY KEY (`emp_no`,`from_date`)
# );
# CREATE TABLE IF NOT EXISTS "titles" (
#     `emp_no` int(11) NOT NULL,
#     `title` varchar(50) NOT NULL,
#     `from_date` date NOT NULL,
#     `to_date` date DEFAULT NULL
# );
# 
# 如插入：
# INSERT INTO salaries VALUES(10001,88958,'1986-06-26','9999-01-01');
# INSERT INTO salaries VALUES(10003,43311,'2001-12-01','9999-01-01');
# INSERT INTO salaries VALUES(10004,70698,'1986-12-01','1995-12-01');
# INSERT INTO salaries VALUES(10004,74057,'1995-12-01','9999-01-01');
# INSERT INTO salaries VALUES(10006,43311,'2001-08-02','9999-01-01');
# INSERT INTO salaries VALUES(10007,88070,'2002-02-07','9999-01-01');
# 
# INSERT INTO titles VALUES(10001,'Senior Engineer','1986-06-26','9999-01-01');
# INSERT INTO titles VALUES(10003,'Senior Engineer','2001-12-01','9999-01-01');
# INSERT INTO titles VALUES(10004,'Engineer','1986-12-01','1995-12-01');
# INSERT INTO titles VALUES(10004,'Senior Engineer','1995-12-01','9999-01-01');
# INSERT INTO titles VALUES(10006,'Senior Engineer','2001-08-02','9999-01-01');
# INSERT INTO titles VALUES(10007,'Senior Staff','1996-02-11','9999-01-01');
# 
# 输出：
# title
# avg
# Senior Engineer
# 62409.25
# Senior Staff
# 88070.0
select t.title, avg(s.salary) as avg
from titles as t
inner join salaries as s
on t.to_date = '9999-01-01' and s.to_date = '9999-01-01' and t.emp_no = s.emp_no
group by t.title;

# 最后的 group by t.title 我掉了
