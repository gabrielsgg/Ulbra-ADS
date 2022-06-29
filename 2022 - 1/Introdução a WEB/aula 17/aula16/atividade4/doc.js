
function nomeValor(){
    var nome,n;
    var nome=prompt('Digite seu nome\n');
    var n=prompt('Digite quantas vezes deseja repetir o nome!\n');
    for (var i = 0;  i<n; i++) {
        alert(`Seu nome é ${nome} | ${i+1} vezes`);
        
    }
  
}