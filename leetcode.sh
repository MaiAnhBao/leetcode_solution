file="file.txt"
regex="[0-9]\{3\}-[0-9]\{3\}-[0-9]\{3\}"
while IFS= read -r var
do
	echo '$var' | grep -q "[0-9]\{3\}"
done < "$file"
