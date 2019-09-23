from urllib.request import urlopen
from bs4 import BeautifulSoup
html = urlopen("https://wikipedia.org")
data =html.read()
soup = BeautifulSoup(data,'html.parser')
pretty_data = soup.prettify()
print(pretty_data)