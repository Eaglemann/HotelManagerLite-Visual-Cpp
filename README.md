# HotelManagerLite-Visual-Cpp

A simple Hotel Management Panel application built with Visual C++ and MySQL. The user interface is in Albanian.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## Description

HotelManagerLite-Visual-Cpp is a basic hotel management application designed to provide essential CRUD (Create, Read, Update, Delete) operations for managing customer and room information. This application serves as a foundational reference for developing more complex hotel management systems. The interface is developed in Visual C++ and the database is managed using MySQL. The application supports receptionist login functionality to manage access control. The user interface is in Albanian.

## Features

-   **Customer Management:**
    -   Create new customer records.
    -   View existing customer details.
    -   Update customer information.
    -   Delete customer records.
-   **Room Management:**
    -   Add new rooms.
    -   View room status (e.g., occupied, vacant, under maintenance).
    -   Update room details.
    -   Delete room records.
-   **Receptionist Login:**
    -   Secure login for receptionists to manage the system.
-   **Albanian Language Interface:**
    -   User interface localized to Albanian.
-   **Data Storage:**
    -   Utilizes MySQL for persistent data storage.

## Installation

Follow these instructions to set up and run the HotelManagerLite-Visual-Cpp application:

1.  **Prerequisites:**

    -   **Visual C++ Redistributable:** Ensure you have the Visual C++ Redistributable for Visual Studio installed.  A compatible version is **Visual Studio 2017 (v141 toolset)**.  Download from [Microsoft's website](https://support.microsoft.com/en-us/topic/the-latest-supported-visual-c-downloads-2647da03-1eea-4433-9aff-9c750f232a1c).
    -   **MySQL Server:** Install MySQL Server. Version **5.7** or **8.0** is recommended. Download from [MySQL Community Downloads](https://dev.mysql.com/downloads/mysql/).
    -   **MySQL Connector/C++:** Install the MySQL Connector/C++. Ensure it's compatible with your MySQL Server version. Download from [MySQL Connector/C++ Downloads](https://dev.mysql.com/downloads/connector/cpp/).

2.  **MySQL Setup:**

    -   Create a new database schema for the application.  For example, name it `hotel_db`.
    >     -   Enter the receptionist username and password in the login screen.

2.  **Main Panel:**

    -   After successful login, the main panel will be displayed, showing options to manage customers and rooms.

3.  **Customer Management:**

    -   Click on "Customer Management" to view, add, update, or delete customer records.

4.  **Room Management:**

    -   Click on "Room Management" to manage room details and status.

## Contributing

Contributions are welcome! Here's how you can contribute:

1.  Fork the repository.
2.  Create a new branch for your feature or bug fix.
3.  Make your changes and commit them with descriptive messages.
4.  Submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Future Development Ideas

-   Implement a reservation system.
-   Add billing and payment processing functionality.
-   Generate reports (e.g., occupancy rate, revenue).
-   Enhance user interface with modern design principles.
-   Implement user role management (e.g., administrator, manager).
-   Multi-language support.
-   Implement proper password hashing and salting for user security.

## Limitations

-   The application currently lacks advanced features such as online booking and detailed reporting.
-   The user interface is basic and may require further design enhancements.
-   Error handling and input validation are minimal and need improvement.
-   The application does not implement proper security measures such as password hashing and salting. The current implementation stores passwords in plain text.