
permutation([], []).

permutation(L, [X|P]) :-
    del(X, L, L1),
    permutation(L1, P).

del(X, [X|T], T).
del(X, [H|T], [H|R]) :-
    del(X, T, R).
