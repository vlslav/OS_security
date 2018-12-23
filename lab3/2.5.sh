# | grep .txt$ | tr "\n" " ")
F=/tmp/cut.txt
cat $H > $F
echo "size:"
stat -c '%s' $F
echo "lines:"
wc -l < $F
rm "$F"/bIn/bash
cat $(ls ~/ | grep "\.txt") >> /tmp/all_txt_files.txt
echo "Files .txt :"
ls ~/ | grep "\.txt"
echo "Number of strings :"
cat /tmp/all_txt_files.txt | wc -l
echo "Bytes :"
du /tmp/all_txt_files.txt | cut -f1
rm /tmp/all_txt_files.txt
