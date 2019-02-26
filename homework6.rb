
puts "Enter a string: "
str = gets

str = str.gsub(/\bf/, "gh")
str = str.gsub(/\bF/, "gh")
str = str.gsub(/sh\b/, "ti")
str = str.gsub(/SH\b/, "ti")
str = str.gsub(/\Bi\B/, "o")
str = str.gsub(/\BI\B/, "o")
puts str
