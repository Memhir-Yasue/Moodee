import json


raw_json = open('json.txt')


json_ = json.load(raw_json)

currency = json_['list'][0][0]['currency']

print(currency)
