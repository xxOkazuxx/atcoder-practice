#!/bin/bash

#abc303
contest_no=$1
CURRENT=$(cd $(dirname $0); pwd)
touch $CURRENT/problems/abc/${contest_no}_a.py
touch $CURRENT/problems/abc/${contest_no}_b.py
touch $CURRENT/problems/abc/${contest_no}_c.py
touch $CURRENT/problems/abc/${contest_no}_d.py
touch $CURRENT/problems/abc/${contest_no}_e.py
touch $CURRENT/problems/abc/${contest_no}_f.py