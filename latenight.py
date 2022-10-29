
from plyer import notification
import requests
import json
import time

def formattedJson(obj):
    
    setup = json.dumps(obj.json()['setup'], sort_keys=True, indent=4)
    punchline = json.dumps(obj.json()['punchline'], sort_keys=True, indent=4)
    
    joke = (setup  +'\n'+ punchline).encode('utf-8').decode('utf-8')
  
    time.sleep(1)
    notification.notify(
        title = 'Hey, Buddy!',
        message = joke,
        app_icon  = '',
        timeout = 30
    )

def getRequest():
    data = requests.get('https://official-joke-api.appspot.com/random_joke')

    formattedJson(data)

getRequest()




