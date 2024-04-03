## Identification (people who are in the team and what we are doing):

- **Team name:**  Nodes&Pointers inc.
- **Team Members:** Sam Aardema, Arhant Choudhary, Adi Pangal, Allan Kaung, Ashley Feng
- **Description of project:** We are creating a software to connect computer science mentors with students. Using an input survey with statements that can categorize students by certain characteristics, we will be able to analyze the data and implement an algorithm to create stable matches where every student is assigned a suitable partner.

## Roles and Responsibilities (for the first sprint who will be the product owner, scrum master, and technical contributors):

- Product Owner: Ashley Feng
- Scrum Master: Arhant Choudhary
- Team Members: Sam Aardema, Adi Pangal, Allan Kaung
- Contribution (beyond the topics covered in class what additional learning do you intend to accomplish?) To learn Web Assembly, Gale-Shapley algorithm, applying of a priority queue.

## Design (What is needed for the project and the ways we are accomplishing the goals):

- Top Level Classes
    - Form
        - Questions with Associated weightage
    - Person
        - Form object with persons answers
        - Array of Priority Queue: (priority calculated based on form answers)
            - Each spot in the array will link to a priority queue that contains mentors who are knowledgeable in that specific language. We will then use the rest of the form questions to order our priority queue so that the first mentor is the most compatible with the user requesting a mentor.
    - Ranker
        - Uses all person objects to update each individual’s priority queue
    - Matcher
        - Uses Gale-Shapely to match mentors and mentored in the most optimal way
- Data Structures
    - Priority Queues, Linked Lists
- Non-C++ Modules
    - We need html and CSS to create a website that will allow users and mentors to sign up, fill out a compatibility form, and then send that data to an algorithm that will help with pairing.
    - We will also use Web Assembly to convert our C++ function into JavaScript so we can embed it in our website.
- Interfaces (Is/APIs that will be provided for others to interact with the product)
    - Website we make that contains form and user accounts

## Development (tools being used to develop the product):

- Development Tools: Web Assembly, html, CSS
- Resources
    - Gale-Shapley: https://web.ece.ucsb.edu/~jrmarden/ewExternalFiles/lecture05-notes.pdf
    - Optional (use a personality test or some sort of other graphing function to determine how compatible or similar two people are)
