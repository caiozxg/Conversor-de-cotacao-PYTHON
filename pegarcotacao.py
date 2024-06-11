import requests
def convertermoedas(moedasantes,moedasdepois):
    link= f"https://economia.awesomeapi.com.br/last/{moedasantes}-{moedasdepois}"
    requisicao = requests.get(link)
    cotacao = requisicao.json()[f"{moedasantes}{moedasdepois}"]["bid"]
    return cotacao
