import cv2
import tkinter as tk
from tkinter import ttk
from PIL import Image, ImageTk
import random


cap = cv2.VideoCapture(0)

def update_camera():
    ret, frame = cap.read()
    if ret:
        frame = cv2.flip(frame, 1)
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        img = Image.fromarray(frame)
        imgtk = ImageTk.PhotoImage(image=img)
        camera_label.imgtk = imgtk
        camera_label.configure(image=imgtk)
    camera_label.after(10, update_camera)


def calculate_alimony():
    try:
        salary = int(salary_entry.get())
        age = int(age_entry.get())
        color = color_combo.get()

      
        base = salary * random.uniform(0.2, 0.6)

        if age > 35:
            base *= 1.2
        if color.lower() == "fair":
            base *= 1.3
        elif color.lower() == "dark":
            base *= 0.9

        result = int(base)

        result_label.config(
            text=f"💸 You must pay: ₹{result} per month\n\nCourt says: No escape 😈",
            foreground="red"
        )

    except:
        result_label.config(text="⚠️ Enter valid details!", foreground="orange")


root = tk.Tk()
root.title("Alimony Calculator Pro™")
root.geometry("900x500")
root.configure(bg="#1e1e1e")


title = tk.Label(root, text=" ALIMONY CALCULATOR PRO", font=("Arial", 20, "bold"), bg="#1e1e1e", fg="white")
title.pack(pady=10)


main_frame = tk.Frame(root, bg="#1e1e1e")
main_frame.pack(fill="both", expand=True)


camera_frame = tk.Frame(main_frame, bg="black", width=450, height=350)
camera_frame.pack(side="left", padx=20, pady=20)

camera_label = tk.Label(camera_frame)
camera_label.pack()


form_frame = tk.Frame(main_frame, bg="#2b2b2b", padx=20, pady=20)
form_frame.pack(side="right", padx=20, pady=20, fill="y")


tk.Label(form_frame, text="Monthly Salary (₹)", bg="#2b2b2b", fg="white").pack(anchor="w")
salary_entry = ttk.Entry(form_frame)
salary_entry.pack(fill="x", pady=5)


tk.Label(form_frame, text="Age", bg="#2b2b2b", fg="white").pack(anchor="w")
age_entry = ttk.Entry(form_frame)
age_entry.pack(fill="x", pady=5)


tk.Label(form_frame, text="Skin Tone ", bg="#2b2b2b", fg="white").pack(anchor="w")
color_combo = ttk.Combobox(form_frame, values=["Fair", "Medium", "Dark"])
color_combo.pack(fill="x", pady=5)


calc_btn = tk.Button(
    form_frame,
    text="Calculate Alimony",
    command=calculate_alimony,
    bg="#ff4d4d",
    fg="white",
    font=("Arial", 12, "bold")
)
calc_btn.pack(pady=15, fill="x")


result_label = tk.Label(form_frame, text="", bg="#2b2b2b", fg="white", font=("Arial", 12))
result_label.pack()


footer = tk.Label(root, text=" Powered by Supreme Court ", bg="#1e1e1e", fg="gray")
footer.pack(pady=5)


update_camera()


root.mainloop()


cap.release()
cv2.destroyAllWindows()