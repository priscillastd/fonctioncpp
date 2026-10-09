int main()
{
    
    bool verite(true);
    cout << verite ;
    
    cout<<"Hello World" << endl << "traduction : \"Bonjour Monde\"" << endl;
   
    string monPrenom;
    cout<< "Quel est votre prénom ?: "<< endl;
    getline (cin, monPrenom);
    
    int age(0);
    cout<<"Bien, et tu as quel age ? : " << endl;
    cin >> age;
    cout << "Enchanté, tu es donc " << monPrenom << " et tu es agé de " << age << " ans. Maintenant, choisis un nombre " << endl ;
   
    int a;
    cin>>a;
    cout<< "Bien choisissez à présent un deuxieme nombre ";
    int b;
    cin>>b;
    int c=a+b;
    cout << "L'addition de ces deux nombres est de  " << c << endl;
    cout << "Tu me dois donc " << c << " euros mon ami ^^";


    return 0;
}

