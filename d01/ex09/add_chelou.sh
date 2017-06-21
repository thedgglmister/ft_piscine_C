echo $FT_NBR1 + $FT_NBR2 | tr "\'\"\?\!\\" "02341" | tr "mrdoc" "01234" | sed "s/^/ibase=5;obase=D; /" | bc | tr "0123456789ABCD" "gtaio luSnemf"
