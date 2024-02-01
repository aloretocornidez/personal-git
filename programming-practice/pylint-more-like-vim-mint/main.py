# main.py
# Testing Linting for my nvim setup.
import my_test as stuff


def MainHello():
    print('Main Hello')


def main():
    print('Inside main.py')

    MainHello()

    stuff.TestHello()


if __name__ == '__main__':
    main()
