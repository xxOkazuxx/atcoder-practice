import io, sys

with open("HandInput.txt") as TxtOpen:
    INPUT = TxtOpen.read() 
sys.stdin = io.StringIO(INPUT)
# --------------------------------------------------------
# Atcoder Begginer Contest
# --------------------------------------------------------
