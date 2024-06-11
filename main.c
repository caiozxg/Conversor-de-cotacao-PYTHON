#janela de 500x500(pixeis)
#titulo(conversor de moedas)
#Campos de selecionar moedas de origem e qual quer mudar,com labels
#botao de converter
#lista explicando o que é cada moeda 

import customtkinter
from PegarMoedas import nomes_moedas

                                            #criar e configurar a janela

#cor do fundo da janela
customtkinter.set_appearance_mode("dark")     

#tema padrão da cor dos elementos a serem adicionados                         
customtkinter.set_default_color_theme("green") 
janela = customtkinter.CTk()

#tamanho da janela       
janela.geometry("600x600")                                             

#criar botões,textos,etc

#texto=label
titulo = customtkinter.CTkLabel(janela, text="Conversor de moedas do Caio",font=("Calibri",30))                                  
texto_moeda_original = customtkinter.CTkLabel(janela, text="Selecione a moeda de origem",font=("Calibri",19))                   
texto_moeda_convertida = customtkinter.CTkLabel(janela, text="Selecione a moeda destino",font=("Calibri",19))   

#criar o menu das moedas que a pessoa selecionará
campo_moeda_original = customtkinter.CTkOptionMenu(janela, values=["EURO","REAIS"])
campo_moeda_convertida = customtkinter.CTkOptionMenu(janela, values=["EURO"])

#botão
def converter_moeda():
    print('moeda convertida!')
    
botao_conversor = customtkinter.CTkButton(janela, text="CONVERTER", command=converter_moeda)


#lista de todas moedas

ListaMoedas = customtkinter.CTkScrollableFrame(janela)


moedas_disponiveis = nomes_moedas()

for codigo_moeda in moedas_disponiveis:
    nomedamoeda = moedas_disponiveis[codigo_moeda]
    texto_moeda = customtkinter.CTkLabel(ListaMoedas, text=f"{codigo_moeda}: {nomedamoeda}")
    texto_moeda.pack()

    
                                            #colocar elementos na tela



#pack=colocar na tela
#pad = distancia de um elemento pro outro
titulo.pack(padx=20,pady=35)
texto_moeda_original.pack(padx=10)
campo_moeda_original.pack(padx=10,pady=10)

#apenas dando um espaço

espaco = customtkinter.CTkLabel(janela,text="")
espaco.pack(pady=20)


texto_moeda_convertida.pack(padx=10,pady=10)
campo_moeda_convertida.pack(padx=10)

botao_conversor.pack(padx=10,pady=30)

ListaMoedas.pack(padx=10,pady=10)


#rodar a janela

janela.mainloop()
