import json


raw_json = open('json.txt')


json_ = json.load(raw_json)

users = json_['users']

print(users)
