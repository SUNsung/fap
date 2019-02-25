
        
        module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
          def file_name
        @template.identifier
      end
    
          class Properties
        def initialize
          @properties = {}
        end
    
          def servers_by_key
        @servers_by_key ||= {}
      end