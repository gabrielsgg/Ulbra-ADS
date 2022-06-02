var numero=1;
console.log(typeof(numero));
var verdadeiro=true;
console.log(typeof(verdadeiro));
var nome='Gabriel';
console.log(typeof(nome));
var carro=["volvo","fiat","bmw"];
console.log(typeof(carro));

function mediaAtiv5(){
    var media,nota1,nota2,nota3;

    var string1=prompt("Digite o primeiro número");
    nota1=parseFloat(string1);

    var string2=prompt("Digite o segundo número");
    nota2=parseFloat(string2);

    var string3=prompt("Digite o primeiro número");
    nota3=parseFloat(string3);
    
    media=(nota1+nota2+nota3)/3;
    window.alert(`A média é: ${media}`);
    console.log(`A média é: ${media}`);

}

function mediaAtiv6(){
    var media,ap1,ap2,as;
    var string1=prompt("Digite a nota da AP1:\n");
    if(string1!=null){
        ap1=parseFloat(string1);
        while(ap1>1.5 || ap1<0){
            console.log("Nota inválida!!\nPeso da AP1 é 1.5!!");
            string1=prompt("Nota inválida!!\nPeso da AP1 é 1.5!!\nDigite Novamente a nota:");
            if(string1<=1.5){
                ap1=parseFloat(string1);
            }
        }
    }

    var string2=prompt("Digite a nota da AP2:\n");
    if(string2!=null){
        ap2=parseFloat(string2);
        while(ap2>2.5 || ap2<0){
            console.log("Nota inválida!!\nPeso da AP2 é 2.5!!");
            string2=prompt("Nota inválida!!\nPeso da AP2 é 2.5!!\nDigite Novamente a nota:");
            if(string2<=2.5){
                ap2=parseFloat(string2);
            }
        }
    }

    var string3=prompt("Digite a nota da AS:\n");
    if(string3!=null){
        as=parseFloat(string3);
        while(as>6 || as<0){
            console.log("Nota inválida!!\nPeso da AS é 6!!");
            string3=prompt("Nota inválida!!\nPeso da AS é 6!!\nDigite Novamente a nota:");
            if(string3<=6){
                as=parseFloat(string3);
            }
        }
    }
    media=ap1+ap2+as;
    if(media<7){
        window.alert(`A média é: ${media}\nVoce está em Exame, precisa fazer a prova de Recuperação.`);
        console.log(`A média é: ${media}\nVoce está em Exame, precisa fazer a prova de Recuperação.`); 
    }else{
        window.alert(`A média é: ${media}\nVoce está Aprovado!!\n Aproveite as férias!!`);
        console.log(`A média é: ${media}\nVoce está Aprovado!!\n Aproveite as férias!!`); 
    }
       
}

function idadeAtiv7(){
    var nome, idade;
    
    var string1=prompt("Digite seu nome:");
    nome=string1;
    var string2=prompt("Digite sua idade:");
    idade=parseInt(string2);
    if(idade>18){
        window.alert(`${nome} voce tem ${idade} anos.\nÉ maior de idade.`);
        console.log(`${nome} voce tem ${idade} anos.\nÉ maior de idade.`);
    }else{
        window.alert(`${nome} voce tem ${idade} anos.\nÉ menor de idade.`);
        console.log(`${nome} voce tem ${idade} anos.\nÉ maior de idade.`);
    }
}

function numMaiorAtiv8(){

    var numero1,numero2,numero3;
    var string1=prompt("Digite o primeiro número:");
    numero1=parseInt(string1);
    var string2=prompt("Digite o segundo número:");
    numero2=parseInt(string2);
    var string3=prompt("Digite o terceiro número:");
    numero3=parseInt(string3);
    if(numero1>numero2 && numero1>numero3){
        window.alert(`O maior número é ${numero1}`);
        console.log(`O maior número é ${numero1}`);
    }else if(numero2>numero1 && numero2>numero3){
        window.alert(`O maior número é ${numero2}`);
        console.log(`O maior número é ${numero2}`);
    }else{
        window.alert(`O maior número é ${numero3}`);
        console.log(`O maior número é ${numero3}`);
    }
}


