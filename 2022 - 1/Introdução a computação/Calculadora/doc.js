function binaryToDecimal(num){
    var arr=num.split('');
    console.log(`o array ${num}`);
    var result = 0;
    var resultadoFinal= 0;
    var contador = 0;
    for(i=arr.length-1;i>=0;i--){
        console.log(`numero:${arr[i]}`);
        result = (arr[i] * Math.pow(2,contador));
        resultadoFinal=resultadoFinal+(result);
        contador++;
    }
    return resultadoFinal;
}
console.log(binaryToDecimal('1010'));

function octalToDecimal(num){
    var arr=num.split('');
    console.log(`o array ${num}`);
    var result = 0;
    var resultadoFinal = 0;
    var contador = 0;

    for(i=arr.length-1;i>=0;i--){
        console.log(`número:${arr[i]}`);
        result = (arr[i] * Math.pow(8,contador));
        resultadoFinal=resultadoFinal+(result);  
        contador++;      
    }
    return resultadoFinal;
}
console.log(octalToDecimal('1011'));


function hexaToDecimal(num){     
    var arr=num.split('');
    console.log(`o array ${arr}`);
    var result = 0;
    var resultadoFinal = 0;
    var contador = 0;


    for(i=arr.length-1;i>=0;i--){
        console.log(`O array ${arr}`);
        
        switch (arr[i]){
            case 'A':
                arr[i]= 10;
                break;
            case 'B':
                arr[i]='11';
                continue;
            case 'C':
                arr[i]='12';
                continue;
            case 'D':
                arr[i]='13';
                continue;
            case 'E':
                arr[i]='14';
                continue;
            case 'F':
                arr[i]='15';
                continue;

        }
    
    }
    return resultadoFinal;
    
}

console.log(hexaToDecimal('CA7'));

