public class ContactList {
    private Contact contacts[];

    public ContactList() {};

    public ContactList(int length) {
        contacts = new Contact[length];
    }

    public boolean insert(Contact contact) {
        boolean msg = false;

        for (int i = 0; i < contacts.length; i++) {
            if (contacts[i] == null) {
                contacts[i] = contact;
                msg = true;
                break;
            }
        }
        return msg;
    }

    public boolean delete(String personId) {
        boolean msg = false;

        for (int i = 0; i < contacts.length; i++) {
            if (contacts[i] != null) {
                if (contacts[i].getPersonId().equals(personId)) {
                    contacts[i] = null;
                    msg = true;
                    break;
                }
            }
        }
        return msg;
    }

    public void showAll() {
        for (int i = 0; i < contacts.length; i++) {
            if (contacts[i] != null) {
                contacts[i].showDetails();
            }
        }
    }

    public Contact getContactById(String personId) {
        Contact contact = null;
        for (int i = 0; i < contacts.length; i++) {
            if (contacts[i] != null) {
                if (contacts[i].getPersonId().equals(personId)) {
                    contact = contacts[i];
                    break;
                }
            }
        }
        return contact;
    }

    public Contact getContactByName(String personName) {
        Contact contact = null;
        for (int i = 0; i < contacts.length; i++) {
            if (contacts[i] != null) {
                if (contacts[i].getPersonName().equals(personName)) {
                    contact = contacts[i];
                    break;
                }
            }
        }
        return contact;
    }

    public Contact getContactByNumber(String mobileNumber) {
        Contact contact = null;
        for (int i = 0; i < contacts.length; i++) {
            if (contacts[i] != null) {
                if (contacts[i].getMobileNumber().equals(mobileNumber)) {
                    contact = contacts[i];
                    break;
                }
            }
        }
        return contact;
    }

    

}