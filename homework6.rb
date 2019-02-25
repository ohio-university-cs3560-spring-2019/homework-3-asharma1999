
puts "Enter a string: "
str = gets
str = str.gsub(/\bf/, "gh")
str = str.gsub(/sh\b/, "ti")
str = str.gsub(/\Bi\B/, "o")
puts str
