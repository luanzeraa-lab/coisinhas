
let adicionais=0;
let entrega=0;

function totalPagar()
{
    
    let total=0; //varável que terá o valor a pagar
    calcularadicionais(); //só chama a função
    calcularentrega();
    total = adicionais + entrega + Number (document.getElementById("combos").value);
    document.getElementById("total").value = total;
    
}

function calcularadicionais()
{
    adicionais=0;
    let i;
    let selecionadas; // só declarou a variável local
    selecionadas = document.querySelectorAll("input[name='adicionais']");
    let qtd = selecionadas.length; //quantos elementos tem na lista, que tem name=adicionais

    for (i=0; i<qtd; i++)
    {
        if (selecionadas[i].checked == true )
        {
            adicionais = adicionais + Number (selecionadas[i].value);
        
        }


    }   

}

function calcularentrega()
{
    
    let i;
    let selecionadas; // só declarou a variável local
    selecionadas = document.querySelectorAll("input[name='entrega']");
    let qtd = selecionadas.length; //quantos elementos tem na lista, que tem name=adicionais

    for (i=0; i<qtd; i++)
    {
        if (selecionadas[i].checked == true )
        {
            entrega = entrega + Number (selecionadas[i].value);
        
        }


    }   

}

function imprimir()
{


}