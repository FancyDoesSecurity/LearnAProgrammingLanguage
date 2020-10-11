=begin
    RUBY programming language write up made by: Fancy
    ruby is a fun and simple yet powerful language
    ruby is a interpreted language ruby is also used for 
    web development and application programming
for a talk about pros and cons about ruby please visit:
    https://www.madetech.com/blog/pros-and-cons-of-ruby-on-rails
=end

# the puts and print statement is how you would display to the console
# as we can see i also put \n meaning it well put a new line
puts "print to the console!\n", "\nhello world!"
print("\nprint to the console!\n", "\nhello world!\n")


=begin
 ok so now lets talk about variables haha!
 as we can see its pretty easy and straight foward!
=end
string = "this is a string" # string
number = 200 # this is a integer
decimal = 45.55 # this is a decimal
boolean = true # this is a boolean
# ok so lets print this onto the screen we have a few options to choose from
puts "#{string}"
puts "string beans: " + string
# pretty ez right?

# CASTING & CONVERTING
puts 2344.234.to_i # converts to an integer
puts 3.to_f # converts to a float
puts 3.0.to_s # converts to a string

=begin
index positions:
starts from 0 to whatever (just handy to know!) 
0123456789
=end

string_bean = "what in the ruby programming language is this?!"
puts string_bean.length # returns the length of the string
puts string_bean[0] # access a specific character in the string
puts string_bean.include? "what" # if the "what" is in the given string it returns a true or false value
puts string_bean[0, 30] # grabs a begining and end index of the given variable

# ARTHIMATIC IN RUBY
print(2 * 500, "\n") # multiplication
print(2 ** 500, "\n") # exponents
print(22 / 500.33, "\n") # integer and double
print(2 % 500, "\n") # returns a remainder
print(2 - 500, "\n") # subtraction
print(2 + 500, "\n") # addition

example = 100 # variable given
# we are adding 1000 to the variable
example += 1000 # +=, -=, /=, *=
# and printing it to the screen
puts example

more_examples = -500.23 # setting a negative number inside this variable
puts = more_examples.abs() # .abs() means absolute value, returns absolute value
puts more_examples.round() # .round() means round, return a rounded amount

=begin
getting user input, YEAH!
pretty simple and ez, also very versatile and useful!
=end
# we set the prompt to Enter>
puts "Enter> "
enter_prompt = gets.chomp # and we set the variable to enter_prompt and make it equal to gets
# gets is a special statement that waits for the user to input something
# also .chomp just helps with new line charachters
puts "You Entered: #{enter_prompt}\n NICE!"


# ok so lets work with arrays now!

numbers_and_stuff = [
    1, 2, 3, 4, 5, 6, 7,
    "eight", "nine", "ten"
    # again indexing remember we start from 0!
]
puts numbers_and_stuff[0] = 90 # makes index spot 0 which is 1 equal to 90!
puts numbers_and_stuff[9] # grabs index spot 9
puts numbers_and_stuff[1, 5] # grabs index spots 1 through 5
puts numbers_and_stuff.length # grabs the array length

# N diminsional arrays
grid = [
    [1, 2, 3, 4, 5],
    [6, 7, 8, 9, 10]
]
=begin
ok so basically N diminsional arrays are arrays with array's inside
of them and this is useful for storing large amounts of data, yeah you get the point
and we set an example of this above this comment here, and we use it like so below this comment
when trying to use the N diminsional arrays you have to specify 2 index locations 
INDEX 1: the array index which would start from 0
INDEX 2: the spot of data inside the array
=end
puts grid[0][4]

# ok so now lets do some array functions
empty_array = []
empty_array.push("text") # this will push the string text into the empty array
empty_array.push("more text")

puts empty_array # prints the array
puts empty_array.reverse # .reverse simply reverses the order
puts empty_array.sort # sorts the array alphabetically
puts empty_array.include? "abc" # checks to see if a certain element is in the array and returns a true or false value

# functions hurray!

def simple_function_example(okok, okok1) # defining the function and the given data it take
    # PS: you do not need to have to make the functions take paramaters
    return okok + okok1 # returning the value of both variables multiplied together
    # the return function just returns data
end # end shows ruby that we want to end the function here
a = simple_function_example(500, 3) # putting the function inside of a variable
puts a  # printing the output of the function to the screen

def even_simpler_function()
    puts "look how ez this is"
end
even_simpler_function # and you can call the function with the normal (braces) or not see
even_simpler_function()

def default_paramater_values(number_one, number_two=222)
    # we see that number_two has a defualt paramter value of 222
    # and we need to actually input a value for number one
    puts number_one * number_two
end
default_paramater_values(500)


=begin
    if, elseif, and else statements
    its again pretty easy
=end

# so lets start with making a function
def example_for_you(paramater_number_juan, param_num_dose=20)
    if param_num_dose + paramater_number_juan > 5200
        puts "ok!"
    elsif param_num_dose and paramater_number_juan == 20
        puts "cool!"
    elsif paramater_number_juan or param_num_dose == 500
        puts "nice!"
    else
        puts "this would be the else statement"
=begin
ok so let me talk about what i did. basically the first statement was an if comparing both numbers added and if those where > than 5200 then is would print ok
the second statement was an elsif which basically means also if, we started with compaing both to one thing by including the and statement in there, (compares both to 20 and if there both equal to 20 than it will print cool)
the third statement is also and elsif comparing both statements BUT it only test to see if one of them are equal to 500 by including the or statement and if its equal to 500
then it will print nice
now we get to the else statement which will run the code if none of the if or elsif statements are true
=end
    end # we also need to specify another end statement here because if you didnt it would keep looping through the if, elsif else statement and
    # return invalid code
end
example_for_you(50)

=begin
comparasin operators:
        >    -   greater than
        <    -   less than
        >=   -   greater than or equal to
        <=   -   less than or equal to
        !=   -   not equal to 
        ==   -   meaning equal to 
=end


# SWITCH STATEMENTS
# lets set an example in like a grading system

grade = "B" # this is what we will be comparing
case grade # we need to pass in a variable into the case statement to compare so we pass in the grade variable
    when "A" # we say when A meaning when grade == A we will print great grade and so on
        puts "GREAT GRADE"
    when "F"
        puts "HORRIBLE GRADE"
    when "B" 
        puts "NICE GRADE"
    else # we have this else statement here indicating
        puts "invalid"
end # and we have to indicate this end statement or else we return invalid code


# DICTIONARIES
# again im gonna go with a grading system because its ez to look at

grades_of_students = {
    # key    # value
    "bob" => "A+", # example A
    :bobby_jr => "C+", # example B
    1 => 95.5 # example C
}
puts grades_of_students["bob"]
puts grades_of_students[:bobby_jr]
puts grades_of_students[1] 
puts grades_of_students[1] = 100
# so as we see above theres a ton of different ways we can use our dictionaries


# WHILE LOOPS
def while_loops()
    ruby_so_kool = 1
    while ruby_so_kool <= 500 # while loop here saying hey as long as ruby_so_kool is not 500 print this text
        puts "ruby is cool!" 
        ruby_so_kool += 1 # +1 onto the ruby_so_kool variable each loop
    end
end


# FOR LOOPS
for new_var in 0..101 # we are looping through 0-100 and setting the variable to new_var 
    puts new_var # printing the 0-100
end # ends the for loop once complete


# exception handling in ruby

begin # shows ruby this is where you wanna start
    zero_divide_error = 100/0
    puts zero_divide_error
rescue # execption for basically all errors
    puts "yo there was an error!"
end # ends right here


# OOP IN RUBY
# (object orientated programming)

class ThisIsAClass # making the class
    attr_accessor :add, :append
    # when defining attributes to the class you have to start with attr_accessor and then the attributes
    def class_gang() # defining the function in the class
        puts "I enjoy #{self.add} in the #{self.append}" # making the output
        # the self keyword is reflecting the attributes
    end # ending the function
end # ending the class
madlibs = ThisIsAClass.new() # setting the class to a new object
madlibs.add = "soda"  #  putting data in the function
madlibs.append = "back yard"  # puting data in the function
madlibs.class_gang() # executing the function inside the function

