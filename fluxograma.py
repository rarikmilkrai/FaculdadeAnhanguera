class_indicativa = int(input("Qual é a classificação indicativa do filme? "))
idade_cliente = int(input("Qual é a idade do cliente? "))

if idade_cliente <= class_indicativa:
    print("Este filme não é para sua faixa etária.")
else:
    print("Este filme é indicado para sua faixa etária.")
