ldapsearch -LLL -Q "uid=z*" cn | sort -r --ignore-case | grep "cn: " | cut -c5-
