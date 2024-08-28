select Department.name as Department, Employee.name as Employee, Salary 
from Employee join Department on Employee.departmentId = Department.id 

where (DepartmentId,Salary) in (select departmentId,max(Salary) from Employee group by departmentId)