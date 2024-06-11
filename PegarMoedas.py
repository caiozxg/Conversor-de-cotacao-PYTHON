import xmltodict


def nome_moedas():
    #abrindo arquivos e lendo
    with open("MoedasDisponiveis.xml","rb") as arquivo_moedas:
        dic_moedas = xmltodict.parse(arquivo_moedas)      
        
    nomesmoedas = dic_moedas["xml"]
    return nomesmoedas
def conversoesdisponiveis():
    with open("ConversoesDisponiveis.xml","rb") as conversoes_moedas:
        dic_conversoes = xmltodict.parse(conversoes_moedas)

        conversoes = dic_conversoes["xml"]
        #criamos um dicionario e vamos testar se é possivel fazer a transformação
        dic_testeconversoesdisponiveis = {}
        for pardemoedas in conversoes:
            moedasantes, moedasdepois = pardemoedas.split('-')
            if moedasantes in dic_testeconversoesdisponiveis:
                dic_testeconversoesdisponiveis[moedasantes].append(moedasdepois)
            else:
                dic_testeconversoesdisponiveis[moedasantes] = [moedasdepois]
    return dic_testeconversoesdisponiveis
    
