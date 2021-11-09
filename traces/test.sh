for f in $(ls); do
    ../vm-sim -i $f > ${f}.log;
    git diff --no-index ../outputs/$(sed -e 's/\.trace/\.log/' <<< ${f}) ${f}.log;
    rm *.log;
done;
