install.packages("randtests")
library(randtests)
outcomes=c("H", "H", "T", "H", "T", "H", "H", "T", "T", "H", "T", "H", "H", "T", "T", "H", "H", "H", "T" , "H", "T", "H", "H",  "T", "T", "H", "T", "T", "T", "H")
randtests.aux(outcomes)

install.packages("snpar")
library("snpar")
runs.test(outcomes)

outcomes=c("H", "H", "T", "H", "T", "H", "H", "T", "T", "H", "T", "H", "H", "T", "T", "H", "H", "H", "T" , "H", "T", "H", "H",  "T", "T", "H", "T", "T", "T", "H")
table(outcomes)
binom.test(16,30,0.5)
