import tkinter as tk

with open('C:\\Program Files\\Marvel.txt') as f:
    contents = f.read()

def read():
    with open('C:\\Program Files\\Marvel.txt') as f:
        contents = f.read()
        T.insert(tk.END, contents)

def calculate():
    T.delete("1.0", "end")
    with open('C:\\Program Files\\Marvel.txt') as f:
        contents=f.read()
        str1=contents.split()
        str2=[]
        for i in str1:
            if i not in str2:
                str2.append(i)
        for i in range(0,len(str2)):
            print(str2)
            T.insert(tk.END, 'Frequency of ', str2[i], 'is:', str1.count(str2[i]))


r = tk.Tk()
r.geometry("750x250")
r.title('Button1')
x = tk.Button(master = r, text='READ', width=15, command=read, font=('Helvetica', 20))
x.pack()




r.title('Button2')
y = tk.Button(master=r, text='Calculate', width=15, command=calculate, font=('Helvetica',20))
y.pack()


T = tk.Text(master = r, width=60, height =35)
T.pack()

r.mainloop()