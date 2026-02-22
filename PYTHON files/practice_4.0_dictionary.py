info = {
    "key" : "value",
    "name" : "abhishek",
    "learning" : "python",
    "age" : "18",
    "is_adult" : True,
    "marks" : 99.99,

    "subject" : ["maths", "physics", "chemistry"],  #can also store list in dictionary
    "topics" : ("introduction", "variables", "loops"), #can also store tuple in dictionary

}

print(info)

print(info["name"])  #accessing value using key
print(info["learning"])
print(info["subject"])

#mutable 
info["name"] = "abhishek_sapkale"  #updating value of a key
print(info)

info["city"] = "pune"  #adding new key-value pair to dictionary
print(info)

null_dcitionary = {}  #empty dictionary
print(null_dcitionary)

null_dcitionary["name"] = "abhishek"  #adding key-value pair to empty dictionary
print(null_dcitionary)

#nested dictionary
student = {
    "name" : "abhishek",
    "subjects" :  {
        "physics" : 95,
        "chemistry" : 87,
        "maths" : 99
    }
 

}


print(student["subjects"])
print(student["subjects"]["physics"])

#dictionary methods

print(student.keys()) #returns all the keys in the dictionary
print(student.values()) #returns all the values in the dictionary
print(student.items()) #returns all the key-value pairs in the dictionary as a list of tuples
print(student.get("name")) #returns the value of the specified key
print(student.get("age", "key not found")) #returns the value of the specified key, if key is not found it returns the default value provided
print(student.pop("name")) #removes the specified key and returns its value
print(student.update({"age" : 18})) #updates the dictionary with the specified key-value pair
print(student)


#type casting
#list to dictionary
list_of_tuples = [("name", "abhishek"), ("age", 18), ("city", "pune")]
dict_from_list = dict(list_of_tuples)
print(dict_from_list)
#tuple to dictionary
tuple_of_tuples = (("name", "abhishek"), ("age", 18), ("city", "pune"))
dict_from_tuple = dict(tuple_of_tuples)
print(dict_from_tuple)

#complex type casting
list_of_dicts = [{"name": "abhishek"}, {"age": 18}, {"city": "pune"}]
dict_from_list_of_dicts = {k: v for d in list_of_dicts for k, v in d.items()}
print(dict_from_list_of_dicts)
