import requests
import json

response = requests.get('https://api.fbi.gov/wanted/v1/list')

data = json.loads(response.content)

data1 = json.dumps(data, indent=4, sort_keys=True)

print(data['total'])
print(data1)

print(data['items'][0]['title'])

