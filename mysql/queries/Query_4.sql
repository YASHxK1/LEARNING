CREATE TABLE all_in_one_practice (
    id INT PRIMARY KEY,
    full_name VARCHAR(100),
    email VARCHAR(150),
    phone VARCHAR(20),
    age VARCHAR(10),              -- stored as text (dirty)
    gender VARCHAR(20),
    city VARCHAR(50),
    country VARCHAR(50),
    signup_date VARCHAR(30),      -- inconsistent date formats
    last_login VARCHAR(30),
    is_active VARCHAR(10),        -- yes/no/1/0/true/false
    total_purchases VARCHAR(20),  -- numeric as text
    total_spent VARCHAR(20),      -- currency symbols mixed
    rating VARCHAR(10),           -- nulls + text
    notes TEXT
);


INSERT INTO yk.all_in_one_practice VALUES
(1, 'Rahul Sharma', 'rahul@gmail.com', '9876543210', '25', 'Male', 'Delhi', 'India', '2023-01-15', '2024-12-01', 'yes', '5', '₹4500', '4.5', 'regular user'),

(2, 'Anita  Verma', 'ANITA@GMAIL.COM', '98-76-54-3211', 'Twenty Two', 'Female', 'Mumbai', 'India', '15/02/2023', 'NULL', '1', '3', '3000', NULL, 'email uppercase'),

(3, 'john doe', 'john.doe@yahoo.com', NULL, '29', 'male', 'New York', 'USA', '2023.03.10', '2024-11-30', 'true', '10', '$1200', '5', ''),

(4, '   Maria Lopez ', 'maria@outlook.com', '5551234', '', 'F', 'Madrid', 'Spain', 'March 5 2023', '2024/10/01', 'false', '0', '€0', 'N/A', 'never purchased'),

(5, 'Amit Singh', NULL, '9999999999', '34', 'Male', 'Bangalore', 'India', '2022-12-01', '2024-12-15', 'yes', '7', '7000 INR', '4', 'missing email'),

(6, 'Sara Khan', 'sara@gmail', '12345', '27', 'Female', 'Delhi', 'India', '2023-06-18', '18-12-2024', 'no', 'two', '₹1500', '3.8', 'invalid email'),

(7, 'Li Wei', 'liwei@china.cn', '+86 123 4567', '31', 'M', 'Beijing', 'China', '2023-07-01', '2024-12-20', 'Yes', '12', '¥5600', '4.9', NULL),

(8, 'Tom', 'tom@gmail.com', '', '19', 'Male', '', 'USA', '2024-01-01', '', '0', '1', '$99.99', '2', 'missing city'),

(9, 'Priya Patel', 'priya@gmail.com', '8888888888', '28', 'Female', 'Ahmedabad', 'India', '2023-08-21', '2024-11-11', 'yes', '8', '₹8200', '4.2', 'good buyer'),

(10, 'Unknown', 'unknown@unknown.com', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 'almost empty row');
