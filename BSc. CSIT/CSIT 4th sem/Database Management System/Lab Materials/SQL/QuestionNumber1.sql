-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Aug 30, 2024 at 06:09 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `QuestionNumber1`
--

-- --------------------------------------------------------

--
-- Table structure for table `Company`
--

CREATE TABLE `Company` (
  `company_name` varchar(50) NOT NULL,
  `city` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `Company`
--

INSERT INTO `Company` (`company_name`, `city`) VALUES
('First Bank Corporation', 'Kathmandu'),
('Second Bank Corporation', 'Pokhara'),
('Third Bank Corporation', 'Syangja');

-- --------------------------------------------------------

--
-- Table structure for table `Employee`
--

CREATE TABLE `Employee` (
  `person_name` varchar(50) NOT NULL,
  `street` varchar(100) DEFAULT NULL,
  `city` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `Employee`
--

INSERT INTO `Employee` (`person_name`, `street`, `city`) VALUES
('Balaram Karki', 'Anamnagar', 'Kathmandu'),
('Eries Basnet', 'Kalika Road', 'Baglung'),
('Gokul Prasaf', 'Durbarmarg', 'Chitwan'),
('Rise Thapa', 'School Road', 'Hetauda');

-- --------------------------------------------------------

--
-- Stand-in structure for view `high_earning_fbc_employees`
-- (See below for the actual view)
--
CREATE TABLE `high_earning_fbc_employees` (
`person_name` varchar(50)
,`street` varchar(100)
,`city` varchar(50)
);

-- --------------------------------------------------------

--
-- Table structure for table `Manages`
--

CREATE TABLE `Manages` (
  `person_name` varchar(50) NOT NULL,
  `manager_name` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `Manages`
--

INSERT INTO `Manages` (`person_name`, `manager_name`) VALUES
('Rise thapa', 'Eries Basnet'),
('Balaram Karki', 'Gokul Prasaf'),
('Eries Basnet', 'Rise Thapa');

-- --------------------------------------------------------

--
-- Table structure for table `Works`
--

CREATE TABLE `Works` (
  `person_name` varchar(50) NOT NULL,
  `company_name` varchar(50) NOT NULL,
  `salary` decimal(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `Works`
--

INSERT INTO `Works` (`person_name`, `company_name`, `salary`) VALUES
('Balaram Karki', 'First Bank Corporation', 93500.00),
('Eries Banset', 'Second Bank Corporation', 90000.00),
('Gokul Prasaf', 'First Bank Corporation', 110000.00),
('Rise Thapa', 'First Bank Corporation', 1045000.00);

-- --------------------------------------------------------

--
-- Structure for view `high_earning_fbc_employees`
--
DROP TABLE IF EXISTS `high_earning_fbc_employees`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `high_earning_fbc_employees`  AS SELECT `e`.`person_name` AS `person_name`, `e`.`street` AS `street`, `e`.`city` AS `city` FROM (`Employee` `e` join `Works` `w` on(`e`.`person_name` = `w`.`person_name`)) WHERE `w`.`company_name` = 'First Bank Corporation' AND `w`.`salary` > 10000 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `Company`
--
ALTER TABLE `Company`
  ADD PRIMARY KEY (`company_name`);

--
-- Indexes for table `Employee`
--
ALTER TABLE `Employee`
  ADD PRIMARY KEY (`person_name`);

--
-- Indexes for table `Manages`
--
ALTER TABLE `Manages`
  ADD PRIMARY KEY (`person_name`),
  ADD KEY `manager_name` (`manager_name`);

--
-- Indexes for table `Works`
--
ALTER TABLE `Works`
  ADD PRIMARY KEY (`person_name`,`company_name`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `Manages`
--
ALTER TABLE `Manages`
  ADD CONSTRAINT `Manages_ibfk_1` FOREIGN KEY (`person_name`) REFERENCES `Employee` (`person_name`),
  ADD CONSTRAINT `Manages_ibfk_2` FOREIGN KEY (`manager_name`) REFERENCES `Employee` (`person_name`);

--
-- Constraints for table `Works`
--
ALTER TABLE `Works`
  ADD CONSTRAINT `Works_ibfk_1` FOREIGN KEY (`person_name`) REFERENCES `Employee` (`person_name`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
