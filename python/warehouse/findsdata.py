from urllib.request import urlopen
from bs4 import BeautifulSoup
html = urlopen("https://en.wikipedia.org/wiki/banana")
data=BeautifulSoup(html,'html.parser')
fin = data.find("table",{"class":"infobox nowrap"}).find("tbody").findAll("tr")
print(fin[1].get_text())#gives energy of banana
