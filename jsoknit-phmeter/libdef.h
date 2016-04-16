/* Jsoknit Library Definition

This is where you define the Jsoknit interface, to be sent
to external devices (we are inside an embedded device here.

The steps are:

1. Define as interface such as:

{"libdef":{
	"def":"833cd4e3",
	"app":"Jsoknit pH meter"},
	"function":[
		{"id":1,
		 "label":"pH",
		 "type":"readLabel",
		 "call":"readPH()",
		 "interval":1
		}]
}

The actual standard is here:
https://github.com/dsikar/jsoknit

2. Make sure JSON is formatted properly, you can test it here:
https://jsonformatter.curiousconcept.com/

3. Once you have proper JSON, escape all quotes i.e. precede with 
backslash character.

4. If your Jsoknit definition is longer than one line, add a 
backslash at the end of every line bar the last one.

5. Assign Jsoknit definition to *libdef.

*/

const char *libdef =
"  {\"libdef\":{ \
    \"def\":\"833cd4e3\", \
    \"app\":\"Jsoknit pH meter\"}, \
 \"function\":[ \
    {\"id\":1, \
     \"label\":\"pH\", \
     \"type\":\"readLabel\", \
     \"call\":\"readPH()\", \
     \"interval\":1 \
    }] \
  }";
