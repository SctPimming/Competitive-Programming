import mysql.connector
import json
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="0000",
    database="OTOG"
)
new = []
mycursor = mydb.cursor()
idContest = input("Enter contest id : ")
sql1 = f'''select user_id,rating,sum(score) as sumscore from (select R.user_id,R.prob_id,R.score,rating,time 
from (select user_id,prob_id, max(time) as latest from Result where contestmode = {idContest} group by user_id,prob_id) 
as x inner join Result as R on R.user_id = x.user_id and R.prob_id = x.prob_id and R.time = x.latest 
inner join User on R.user_id = User.idUser where User.state = 1 group by user_id,prob_id) as scoreb group by user_id order by sumscore desc'''
sql2 = f'''select * from contest where idContest = {idContest}'''
mycursor.execute(sql1)
ranking = mycursor.fetchall()
mycursor.execute(sql2)
contest = mycursor.fetchone()
print(contest)
prev = -1
prev = -1
number = 0
cnt = 0
for e in ranking:
    info = list(e)
    cnt += 1
    sumscore = round(e[2])
    if sumscore != prev:
        number = cnt
    info.append(number)
    prev = sumscore
    new.append(info)

for e in new:
    history = {
        'conName' : f'''#{contest[0]} {contest[1]}''',
        'rating' : e[1],
        'time' :contest[4],
        'rank' : e[3]
    }
    sql = f"select history from User where idUser = {e[0]}"
    mycursor.execute(sql)
    userData = mycursor.fetchone()
    arr = []
    s = []
    if(userData[0] == None) :
        arr.append(history)
        for user in history:
            s.append(json.loads(str(arr)))
        print(s)
    else :
        s = json.dumps(userData[0])
        #print(s)
    sql = "update User set history = %s where idUser = %s"
    val = (str(arr),e[0])
    mycursor.execute(sql, val)
#mydb.commit()