square(1) :-
    write('*****'), nl.
square(X) :-
    X > 1,
    write('*****'), nl,
    X1 is X - 1,
    square(X1).
