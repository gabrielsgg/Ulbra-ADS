$(document).ready(function(){
 
    $('#menu_calculadora').click(function(){
        $('section').load('calculadora.html')

        
    })
    
    $('#calcular').click(function(){
        var num1 = parseFloat($('#numero1').val());
        var num2 = parseFloat($('#numero2').val());
        var select = $('#selectOperacao').val();
    
        switch (select) {
            case '+':
                var soma=num1+num2;
                $('#res').html (`<p>A Soma dos números informados é: ${soma}</p>`);
                break;
            case '-':
                var sub=num1-num2;
                $("#res").html (`<p>A Subtração dos números informados é: ${sub}`);
                break;
            case '*':
                var mult=num1*num2;
                $("#res").html (`<p>A Multiplicação dos números informados é: ${mult}`);
                break;
            case '/':
                var divisao=num1/num2;
                $("#res").html (`<p>A divisão dos números informados é: ${divisao}`);
                break;
            default:
                break;
        }

    })


    

  });