cat  /etc/passwd |sed 's/:.*//' | sed '/^#/d' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]'  | tr '\n' ',' | sed 's/.\{2\}$/./'
