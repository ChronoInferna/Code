with open("dictionary.txt", "r+") as file:
    file_words = file.read().split(" ")
    for i in range(len(file_words)):
        file_words[i] = file_words[i].lower()
    file_words.pop()

    quit_loop = False
    while quit_loop is False:
        print("1) Enter new words\n2) Test sentence\n3) Exit")
        try:
            menu_input = int(input())
        except:
            print("Try again!")
            continue
        if menu_input == 1:
            print("Enter words to enter: ", end="")
            new_words = input().split(" ")
            for i in range(len(new_words)):
                new_words[i] = new_words[i].lower()
                if new_words[i] in file_words:
                    continue
                file_words.append(new_words[i])
                file.write(new_words[i] + " ")
        elif menu_input == 2:
            print("Enter sentence to test: ", end="")
            test_words = input().split(" ")
            allowed_words_list = []
            for i in range(len(test_words)):
                if test_words[i] in file_words:
                    allowed_words_list.append(test_words[i])
            print("Allowed sentence: " + " ".join(allowed_words_list))
        # elif menu_input == 3:
        elif menu_input == 3:
            quit_loop = True
