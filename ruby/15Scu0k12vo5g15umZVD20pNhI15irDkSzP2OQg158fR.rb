
        
                def delimiter_delta
          return 0 if first.same_line?(second)
          return 0 if first.delimiter != second.delimiter
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end
    
    When /^I comment out the gem '([^']*)' from the Gemfile$/ do |gemname|
  comment_out_gem_in_gemfile gemname
end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
        module ClassMethods
      def attachment_definitions
        Paperclip::AttachmentRegistry.definitions_for(self)
      end
    end
  end
end
