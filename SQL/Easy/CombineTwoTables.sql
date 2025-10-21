# Write your MySQL query statement below
SELECT Person.firstName,Person.lastName,Address.city,Address.state from PERSON
LEFT JOIN ADDRESS
ON Person.personId = Address.personId;