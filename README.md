# GIT Homework 2 - Project Report

**Student:** Adile Çelik  
**University:** Bialystok University of Technology  
**Department:** Computer Science

## 1. Project Overview
This project demonstrates basic and advanced Git operations, including repository management, branching, merging, and collaboration with conflict resolution. The application is implemented in both **C++** and **Python**.

## 2. Completed Tasks

### Code Functionalities
- **Initial Setup:** Created a repository with a list of 5 elements.
- **Loops & Logic:** Added 5 random numbers to the list using a loop.
- **Sorting:** Implemented an ascending sort algorithm for the final list.

### Git Operations
- **Branching (Item X):** Created a `develop` branch for improvements.
- **Merging (Item Y):** Merged the `develop` branch into the `main` branch after testing.
- **Authorship (Item L):** Used `git blame` to verify the origin of each code line.

---

## 3. Collaboration and Conflict Resolution (Item Z)

In this section, we simulated a real-world collaboration scenario where two people edit the same line of code simultaneously.

1. **The Conflict:** I pushed a change to line in `homework.cpp`. My collaborator tried to push a different change to the same line without pulling my update first.
2. **The Error:** Git rejected the collaborator's push with a `[rejected]` error.
3. **The Resolution:** We performed a `git pull`, resolved the conflict by choosing **"Accept Both Changes"**, and pushed the final "peaceful" version.

---

## 4. Screenshots & Evidence

### Git Blame (Task L)
![Git Blame](https://github.com/user-attachments/assets/0dcb6ec0-e14b-4852-be48-b197424fb0bd)

### Project History Graph (Task X & Y)
![Project History Graph](https://github.com/user-attachments/assets/d8b4f6bb-c3df-4d4e-b1c3-2f9302c6aa3e)

### Conflict Process & Resolution (Task Z)

In the screenshot below, the entire process is documented:
1. **The Error:** The red `[rejected]` message shows the conflict when trying to push.
2. **The Resolution:** After performing a `git pull` and manual fix, the `Conflict solved` commit and successful push are visible at the bottom.
![Conflict Resolution](https://github.com/user-attachments/assets/55ffa5b8-6982-49ff-925f-366bf2f7d0cc)


