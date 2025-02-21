# 🔍 Linear Search Implementation in C  

A simple **Linear Search** program implemented in **C**. This program allows users to **search for a specific number in an array** and returns its **position** if found.  

---

## 📌 Features  
✅ Takes an **array** as input from the user  
✅ Searches for a given **number** in the array  
✅ Returns the **position** of the number if found  
✅ Displays **"Number not found"** if the number is absent  
✅ Uses **functions** for modular code  

---

## 🛠️ Technologies Used  
- **C Programming**  
- **Functions** (for better modularity)  
- **Loops & Conditional Statements**  

---

## 🚀 Getting Started  

### 1️⃣ Clone the repository:  
```bash
git clone https://github.com/ShadBuilds/Linear_Search_C
```

### 2️⃣ Navigate to the project folder:  
```bash
cd Linear_Search_C
```

### 3️⃣ Compile the program using GCC:  
```bash
gcc linear_search.c -o linear_search
```

### 4️⃣ Run the program:  
```bash
./linear_search
```

---

## 🖥️ Code Overview  

### 🔹 Linear Search Function  
```c
void linear_search(int a[], int search, int range) {
    int found = 0;
    for (int i = 0; i < range; i++) {
        if (a[i] == search) {
            found = 1;
            printf("Number found at position %d\n", i + 1);
        }
    }
    if (!found) {
        printf("Number not found in the array.\n");
    }
}
```

---

## 📌 Example Output  
```
Enter the number of elements: 5
Enter element 1: 10
Enter element 2: 20
Enter element 3: 30
Enter element 4: 40
Enter element 5: 50
Enter the number to search: 30
Number found at position 3
```

---

## 📚 What I Learned  
📌 Using **functions** to improve code structure  
📌 Implementing a **basic search algorithm** in C  
📌 Handling **user input** and **loops efficiently**  

---

## 🔗 Connect with Me  
🔗 **[LinkedIn: Mohammad Shad](https://www.linkedin.com/in/mohammad-shad-9a378b343/)**  
🔗 **[GitHub: ShadBuilds](https://github.com/ShadBuilds)**  

Feel free to **explore, contribute, or suggest improvements**! 🚀  
```

