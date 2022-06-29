
function somarNumeros(){
    var numero1=parseFloat(prompt("Digite o primeiro número"));
    var numero2=parseFloat(prompt("Digite o segundo número"));
    var op=prompt('Escolha a operação para realizar o cálculo');
    switch (op) {
        case '+':
            var soma=numero1+numero1;
            alert(`A soma é:\n${soma}`);
            break;
        case '-':
            var sub=numero1+numero2;
            alert(`A subtração é:\n${sub}`);
            break;
        case '*':
            var mult=numero1*numero2;
            alert(`A multiplicação é:\n${mult}`);
            break;
        case '/':
            var div=numero1/numero2;
            alert(`A divisão é:\n${div}`);
            break;
        default:
            alert('Digite uma opção válida!!!')
            break;
    }
}