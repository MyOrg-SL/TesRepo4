Last login: Tue Jan 12 13:09:05 on console
ankit-mac:~ ankit$ 
ankit-mac:~ ankit$ 
ankit-mac:~ ankit$ 
ankit-mac:~ ankit$ pwd
/Users/ankit
ankit-mac:~ ankit$ ls
Applications		Dropbox			Public
C02NP65EG3QC.plist	Google Drive		TestRepo
C02NP65EG3QC.txt	Library			Work
Desktop			Movies			macsetup
Documents		Music
Downloads		Pictures
ankit-mac:~ ankit$ cd TestRepo/TesRepo4/
ankit-mac:TesRepo4 ankit$ ls
a.c	b.c	e.c	goel.c	json.pl	s.c	t.c
ankit.c	d.c	f.c	goel2.c	o.c	sss.c	v.c
ankit-mac:TesRepo4 ankit$ vi t.c







import sys
import json
import itertools

class Pass(object):
    def __init__(self, name):
        self.name = name
    def __repr__(self):
        return "<pass name=%s>" % self.name

PassListId = 0
class PassList(object):
    def __init__(self, transforms):
        global PassListId
        self.pass_id = PassListId
        PassListId += 1
        self.transforms = transforms

    def __repr__(self):
        return "<passlist id=%s values=%s>" % (self.pass_id, self.transforms)

    def __iter__(self):
"t.c" 59L, 1537C

