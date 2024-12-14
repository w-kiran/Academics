goal(g). % Define the goal node.
arc(a, b).
arc(a, c).
arc(a, d).
arc(c, k).
arc(c, f).
arc(d, g).
arc(d, h).
arc(d, i).
arc(f, l).
arc(h, m).

% Breadth-First Search (BFS)
bf([[Start|Path]|_], Start, [Start|Path]). % Found the goal.
bf([[K|Path]|Paths], Goal, Solution) :-
    K \== Goal,
    bagof([M, K | Path], (arc(K, M), \+ member(M, [K | Path])), New_Paths),
    append(Paths, New_Paths, Paths1),
    !,
    bf(Paths1, Goal, Solution);
    bf(Paths, Goal, Solution). % Fallback if no new paths are found.
bf([], _, []). % If there are no paths left to explore.

% Wrapper predicate to initiate BFS
find_path(Start, Goal, Solution) :-
    bf([[Start]], Goal, Solution).


