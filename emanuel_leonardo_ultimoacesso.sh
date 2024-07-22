#!/bin/bash

# Nome: Emanuel José Quadras
# Nome: Leonardo Nunes Muniz

dtini=$(date +"%Y-%m-%d")
base=$(pwd)
arquivogerado="emanuel_leonardo_AcessoRecente_${dtini}.txt"
saida="${base}/${arquivogerado}"

# Limpa o arquivo de saída se ele já existir
> "$saida"

# Busca arquivos acessados nos últimos 2 dias
find "$base" -type f -atime -2 -print0 | while IFS= read -r -d '' file; do
  dir=$(dirname "$file")
  echo "$file" >> "$saida"
done

# Informar ao usuário onde o arquivo de saída foi salvo
echo "Relatório gerado em: $saida"

