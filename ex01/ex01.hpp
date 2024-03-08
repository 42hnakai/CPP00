
class PhoneBook{
    public:
        class Contact;
        char contact[8][4];
        void serch(char *contact);
        void add(char *contact);
        void display_contacts();
    private:
};

class Contact{
    public:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        int phone_number;
    private:
        std::string darkest_secret;
};