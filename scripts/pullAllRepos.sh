for i in */.git/; do (cd $i/..; pwd; git pull; echo ""); done;
