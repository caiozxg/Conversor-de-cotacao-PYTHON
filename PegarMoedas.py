import xmltodict


def nome_moedas():
    #abrindo arquivos e lendo
    with open("MoedasDisponiveis.xml","rb") as arquivo_moedas:
        dic_moedas = xmltodict.parse(arquivo_moedas)      
        
    nomesmoedas = dic_moedas["xml"]
    return nomesmoedas

with open("ConversoesDisponiveis.xml","rb") as conversoes_moedas:
    dic_conversoes = xmltodict.parse(conversoes_moedas)

    conversoes = dic_conversoes["xml"]
