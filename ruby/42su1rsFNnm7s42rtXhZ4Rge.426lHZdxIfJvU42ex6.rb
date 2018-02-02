
        
            #
    # Parses +date+ using Date._strptime and converts it to a Time object.
    #
    # If a block is given, the year described in +date+ is converted by the
    # block.  For example:
    #
    #   Time.strptime(...) {|y| y < 100 ? (y >= 69 ? y + 1900 : y + 2000) : y}
    #
    # Below is a list of the formatting options:
    #
    # %a :: The abbreviated weekday name ('Sun')
    # %A :: The  full  weekday  name ('Sunday')
    # %b :: The abbreviated month name ('Jan')
    # %B :: The  full  month  name ('January')
    # %c :: The preferred local date and time representation
    # %C :: Century (20 in 2009)
    # %d :: Day of the month (01..31)
    # %D :: Date (%m/%d/%y)
    # %e :: Day of the month, blank-padded ( 1..31)
    # %F :: Equivalent to %Y-%m-%d (the ISO 8601 date format)
    # %h :: Equivalent to %b
    # %H :: Hour of the day, 24-hour clock (00..23)
    # %I :: Hour of the day, 12-hour clock (01..12)
    # %j :: Day of the year (001..366)
    # %k :: hour, 24-hour clock, blank-padded ( 0..23)
    # %l :: hour, 12-hour clock, blank-padded ( 0..12)
    # %L :: Millisecond of the second (000..999)
    # %m :: Month of the year (01..12)
    # %M :: Minute of the hour (00..59)
    # %n :: Newline (\n)
    # %N :: Fractional seconds digits, default is 9 digits (nanosecond)
    #       %3N :: millisecond (3 digits)
    #       %6N :: microsecond (6 digits)
    #       %9N :: nanosecond (9 digits)
    # %p :: Meridian indicator ('AM' or 'PM')
    # %P :: Meridian indicator ('am' or 'pm')
    # %r :: time, 12-hour (same as %I:%M:%S %p)
    # %R :: time, 24-hour (%H:%M)
    # %s :: Number of seconds since 1970-01-01 00:00:00 UTC.
    # %S :: Second of the minute (00..60)
    # %t :: Tab character (\t)
    # %T :: time, 24-hour (%H:%M:%S)
    # %u :: Day of the week as a decimal, Monday being 1. (1..7)
    # %U :: Week number of the current year, starting with the first Sunday as
    #       the first day of the first week (00..53)
    # %v :: VMS date (%e-%b-%Y)
    # %V :: Week number of year according to ISO 8601 (01..53)
    # %W :: Week  number  of the current year, starting with the first Monday
    #       as the first day of the first week (00..53)
    # %w :: Day of the week (Sunday is 0, 0..6)
    # %x :: Preferred representation for the date alone, no time
    # %X :: Preferred representation for the time alone, no date
    # %y :: Year without a century (00..99)
    # %Y :: Year which may include century, if provided
    # %z :: Time zone as  hour offset from UTC (e.g. +0900)
    # %Z :: Time zone name
    # %% :: Literal '%' character
    
      def test_capture2e_stdin_data_io
    IO.pipe {|r, w|
      w.write 'i'
      w.close
      oe, s = Open3.capture2e(RUBY, '-e', 'i=STDIN.read; print i+'o'; STDOUT.flush; STDERR.print i+'e'', :stdin_data=>r)
      assert_equal('ioie', oe)
      assert(s.success?)
    }
  end
    
      # GET /books/1
  # GET /books/1.json
  def show
  end
    
            def autocorrect(node)
          redundant_regex?(node) do |receiver, regex_str|
            receiver, regex_str = regex_str, receiver if receiver.is_a?(String)
            regex_str = regex_str[0..-3] # drop \Z anchor
            regex_str = interpret_string_escapes(regex_str)
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
            private
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
      def self.plugin_type
    'codec'
  end
    
        r0
  end