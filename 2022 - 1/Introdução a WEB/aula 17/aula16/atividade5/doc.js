
function nomeEmail(){
    email=[];
    nome=[];
    endereco=[];

    nome.push(prompt('Digite seu nome:'));
    res.innerHTML+=`<p>O nome digitado foi ${nome}</p>`;
    email.push(prompt('Digite seu e-mail:'));
    res.innerHTML+=`<p>O email digitado foi ${email}</p>`;
    endereco.push(prompt('Digite seu Endereço:'));
    res.innerHTML+=`<p>O endereço digitado foi ${endereco}</p>`;

     
}

    