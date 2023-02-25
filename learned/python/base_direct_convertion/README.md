
# Base Convertion:

## <u> _Steps to run the programme_ : </u>
- Enter The Number
- Then it's base
- Then the target base number you want to convert it

## How it works:
> The Idea is to divide the number with target base value
But the `quotient` and the `remainder` will remain in the `primary base`
Then the `remainders` will be <b><ins>concatenated</ins></b> from `MSB` -> `LSB` 

## Example:
| Base-5 | Target Base | quotient | Remainder |  LSB |
| ------ | ----------- | -------- | --------- | ---- |
| 123    |  2          |    34    |     0     |  ^   |
| 34     |  2          |    14    |     1     |  \|   |
| 14     |  2          |    4     |      1    |  \|   |
| 4      |  2          |   2      |   0       |  \|   |
| 2      |   2         |   1      |    0      |  \|   |
| 1      |  2          |  0       |    1      |  MSB |

## Pictures:
![image](https://user-images.githubusercontent.com/41261534/221346033-21ca8ab2-45a2-4669-a21d-eb92f06072cf.png)


## [Live Demo in _repl.it_](https://replit.com/@MeEk0/anyBaseConverter?v=1#main.py)
> Run the `main.py` file
