import pandas as pd 

csvdf=pd.read_csv("E:/Jupyter_notebook/learn_pandas/pokemon.csv")
# print(csvdf)

tall_pokemon=csvdf[csvdf["Height"] >= 2]

print(tall_pokemon)