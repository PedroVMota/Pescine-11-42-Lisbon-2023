cat /etc/passwd | grep -v ^# | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -r | head -n  | tail -n -1 | tr n ,  | sed s/,$/./ | tr -d n
