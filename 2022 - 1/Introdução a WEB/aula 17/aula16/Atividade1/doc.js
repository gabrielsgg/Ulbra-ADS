
function compararNumeros(){
    var numero=parseFloat(prompt("Digite o numero"));
    if(numero>10){
        alert(`${numero}\nÉ maior que 10`);
    }else if(numero==10){
        alert(`${numero}\nÉ igual a 10`);
    }else{
        alert(`${numero}\nÉ menor que 10`);
    }
}