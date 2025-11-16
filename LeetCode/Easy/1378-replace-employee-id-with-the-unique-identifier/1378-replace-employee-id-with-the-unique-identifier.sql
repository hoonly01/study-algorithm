# Write your MySQL query statement below
select u.unique_id, e.name
from
    Employees AS e
left join
    EmployeeUNI AS u
on
    e.id = u.id