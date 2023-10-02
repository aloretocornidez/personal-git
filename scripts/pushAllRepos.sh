for i in */.git; do (cd ..; pwd; git add . && git commit -m 'pushing using script'; git push; pushgit);done;
