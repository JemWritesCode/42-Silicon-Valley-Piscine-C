touch bomb.txt |touch -A "-000001" bomb.txt | stat -r bomb.txt | cut -d ' ' -f9  
