//atividade 1:
function resolverOper(){
    var num1=parseFloat(document.getElementById('numero1').value);
    var num2=parseFloat(document.getElementById('numero2').value);
    var select = document.getElementById('selectOperacao').value;
	
    console.log(`${num1} ${num2} ${select}`)

    switch (select) {
        case '+':
            var soma=num1+num2;
            document.getElementById("res").innerHTML = `<p>A Soma dos números informados é: ${soma}</p>`;
            break;
        case '-':
            var sub=num1-num2;
            document.getElementById("res").innerHTML = `<p>A Subtração dos números informados é: ${sub}`;
            break;
        case '*':
            var mult=num1*num2;
            document.getElementById("res").innerHTML = `<p>A Multiplicação dos números informados é: ${mult}`;
            break;
        case '/':
            var divisao=num1/num2;
            document.getElementById("res").innerHTML = `<p>A divisão dos números informados é: ${divisao}`;
            break;
        default:
            break;
    }
}

//atividade 2



function valorFatura(){
    var kwhConsumo=parseFloat(document.getElementById('quantidadeKwh').value);
    var valorKwh=parseFloat(document.getElementById('precoKwh').value);
    if(kwhConsumo<=100){
        var contaValor=kwhConsumo*valorKwh;
        document.getElementById('resEnergia').innerHTML = `Você precisa pagar: R$ ${contaValor}`;
    }else if(kwhConsumo>100 && kwhConsumo<=200){
        var contaValor=kwhConsumo*valorKwh;
        var valorTaxa=contaValor*0.25;
        var contaTaxada=contaValor+valorTaxa;
        document.getElementById('resEnergia').innerHTML = `<p>Você consumiu mais que 100kWh e foi taxado em 25% sobre o valor da fatura:</p><p>Valor da fatura: R$ ${contaValor}</p><p>Valor da taxa de 25%: R$ ${valorTaxa}</p><p>Valor total da fatura: R$ ${contaTaxada}</p>`;
    }else{
        var contaValor=kwhConsumo*valorKwh;
        var valorTaxa=contaValor*0.50;
        var contaTaxada=contaValor+valorTaxa;
        document.getElementById('resEnergia').innerHTML = `<p>Você consumiu mais que 200kWh e foi taxado em 50% sobre o valor da fatura:</p><p>Valor da fatura: R$ ${contaValor}</p><p>Valor da taxa de 50 %: R$ ${valorTaxa}</p><p>Valor total da fatura: R$ ${contaTaxada}</p>`;
    }
}

//atividade 3


function resMaiorNumero(){
    var numeros=document.getElementById('numeros').value;
    var arrNumeros=numeros.split(',');
    var maior=arrNumeros[0];
    for(var i in arrNumeros){
        var valorAtual=parseFloat(arrNumeros[i]);
        if(valorAtual>maior){
            maior=valorAtual;
            
        }
    }
    document.getElementById('resMaiorNumero').innerHTML = `<p>O Maior número é: ${maior}</p>`
    console.log(maior);
   
}


//atividade 4


function idadesMaiorMenor(){
    contadorIdadesMenor=0;
    contadorIdadesMaior=0;    
    var idades=document.getElementById('idades').value;
    var arrIdades=idades.split(',');
    
    
    for(var i=0;i<arrIdades.length;i++){
        var idadeNumero=parseFloat(arrIdades[i])
        if(idadeNumero<18){
            contadorIdadesMenor++
        }else if(idadeNumero>=18){
            contadorIdadesMaior++;
        }
    }

    document.getElementById('resMaiores').innerHTML=`<p> Entre as idades informadas, ${contadorIdadesMenor} são menores de idades.</p>`;
    document.getElementById('resMenores').innerHTML=`<p> Entre as idades informadas, ${contadorIdadesMaior} são maiores de idades.</p>`;
    
   
}