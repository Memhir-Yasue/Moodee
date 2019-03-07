import json


raw_json = open('json.txt')


file = json.load(raw_json)

# currency = file['list'][0][0]['currency'] # for jsonCPY.txt

data = file['data']['users']['YasuE']['2018']['January']['12']
users = file['data']['users'].keys()

print(users)
print(data)
