import requests
import json
import csv
api_path = "https://otog.cf/api/"
problem_api = "problem"
fname = "csv_report.csv"
r = requests.get(api_path + problem_api)
j = r.json()
problem_list = []
for item in j :
    problem_list.append(item)
for problem in problem_list:
    print(type(problem))

with open(fname, "w", encoding="utf-8", newline='') as f:
    field_names = ["id_Prob", "name", "sname"]
    writer = csv.DictWriter(f, fieldnames=field_names)
    writer.writeheader()
    for item in problem_list:
        writer.writerow({
            "id_Prob": item["id_Prob"], 
            "name" : item["name"], 
            "sname": item["sname"]
        })