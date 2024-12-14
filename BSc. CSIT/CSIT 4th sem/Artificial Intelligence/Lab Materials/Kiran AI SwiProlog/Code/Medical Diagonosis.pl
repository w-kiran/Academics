% Facts: Symptoms for each disease
disease(flu) :- symptom(fever), symptom(cough), symptom(sore_throat), symptom(fatigue).
disease(cold) :- symptom(cough), symptom(sneezing), symptom(runny_nose).
disease(covid19) :- symptom(fever), symptom(cough), symptom(shortness_of_breath), symptom(fatigue).
disease(malaria) :- symptom(fever), symptom(chills), symptom(sweating), symptom(headache).
disease(diabetes) :- symptom(frequent_urination), symptom(increased_thirst), symptom(weight_loss), symptom(fatigue).

% User input for symptoms
ask_symptom(Symptom) :-
    format('Do you have ~w? (yes/no): ', [Symptom]),
    read(Response),
    (Response == yes -> assertz(symptom(Symptom)); true).

% Diagnosis
diagnose :-
    write('Welcome to the Medical Diagnosis System!'), nl,
    write('Please answer the following questions:'), nl,
    % List all possible symptoms to check
    ask_symptom(fever),
    ask_symptom(cough),
    ask_symptom(sore_throat),
    ask_symptom(fatigue),
    ask_symptom(sneezing),
    ask_symptom(runny_nose),
    ask_symptom(shortness_of_breath),
    ask_symptom(chills),
    ask_symptom(sweating),
    ask_symptom(headache),
    ask_symptom(frequent_urination),
    ask_symptom(increased_thirst),
    ask_symptom(weight_loss),
    % Check for diseases
    (   disease(Disease)
    ->  format('You may have ~w. Please consult a doctor for confirmation.', [Disease])
    ;   write('Sorry, no diagnosis could be determined. Please consult a doctor.')
    ),
    % Clear the knowledge base for symptoms
    retractall(symptom(_)).
