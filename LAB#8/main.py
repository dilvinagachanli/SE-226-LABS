from abc import ABC

class adress(ABC):
    def __init__(self,adr):
        self.adr = adr

    def calculateFreqs(self):
        pass



class ListCount():
    pass


class DictCount():
    def calculateFreqs(self):
        with open('C:\\Users\\MSI-NB\\Desktop\\stephen.txt', 'r') as f:
            listl = []
            for line in f:
                strip_lines = line.strip()
                listli = strip_lines.split()
                m = listl.append(listli)
            print(listl)
            count = {item: listli.count(item) for item in listli}
            print(count)

        #myobj = open(self.adr)
        #content = myobj.read()



x= adress('C:\\Users\\MSI-NB\\Desktop\\stephen.txt')
x.calculateFreqs()
a = DictCount()
a.calculateFreqs()