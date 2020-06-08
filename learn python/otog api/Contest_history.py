import requests
import json
import csv
api_path = "https://otog.cf/api/"
contest_history = "contest/history"
problem_api = "problem"
fname = "csv_report.csv"
r = requests.get(api_path + problem_api)
j = r.json()
problem_list = []
contest_list = []
for item in j:
    problem_list.append(item)
r = requests.get(api_path + contest_history)
j = r.json()
for item in j:
    contest_list.append(item)
for contest in contest_list:
    prob_id_list = contest["problems"]
    prob_id_list = prob_id_list[1:len(prob_id_list)-1]
    # print(prob_id_list)
    prob_id_list = prob_id_list.split(",")
    # print(prob_id_list)
    prob_sname_list = []
    for prob_id in prob_id_list:
        prob_id = int(prob_id)
        for problem in problem_list:
            if problem["id_Prob"] == prob_id:
                prob_sname_list.append(problem["sname"])
    contest["problems"] = prob_sname_list     
with open(fname, "w", encoding="utf-8", newline='') as f:
    field_names = ["idContest", "name", "problem A", "problem B", "problem C"]
    writer = csv.DictWriter(f, fieldnames=field_names)
    writer.writeheader()
    for contest in contest_list:
        problem_list = contest["problems"]
        for i in range (0, 3 - len(problem_list)):
            problem_list.append("")
        print(type(problem_list))
        writer.writerow({
            "idContest": contest["idContest"], 
            "name" : contest["name"], 
            "problem A": '=HYPERLINK("otog.cf/api/docs/' + problem_list[0] + '", "' +  problem_list[0] + '")',
            "problem B": '=HYPERLINK("otog.cf/api/docs/' + problem_list[1] + '", "' +  problem_list[1] + '")',
            "problem C": '=HYPERLINK("otog.cf/api/docs/' + problem_list[2] + '", "' +  problem_list[2] + '")',
        })