# interactive_script.py
import sys
resultPath   = sys.argv[1]
problemDir   = sys.argv[2]
atCase       = sys.argv[3]

with open(resultPath) as f:
  res = [float(i) for i in f.read().strip().split()]
with open(problemDir + atCase + ".sol") as f:
  sol = [float(i) for i in f.read().strip().split()]

sz = len(sol)
sw = True;
for i in range(sz):
    if abs(sol[i] - res[i]) > 1e-4:
        sw = False
        break
if sw == True:
  print("P")
else:
  print("-")