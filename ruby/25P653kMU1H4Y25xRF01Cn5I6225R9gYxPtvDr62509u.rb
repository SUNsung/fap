
        
                if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
    module Docs
  class Filter < ::HTML::Pipeline::Filter
    def css(*args)
      doc.css(*args)
    end
    
        def as_json
      @pages
    end
    
            css('header').each do |node|
          node.before(node.children).remove
        end
    
            css('.toplang', '#quickview', '.top').remove
    
            # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # The VM which this system is tied to.
        attr_reader :vm
    
            # This returns all registered host classes.
        #
        # @return [Hash]
        def hosts
          hosts = {}
    
            # The configuration for this provisioner. This will be an instance of
        # the `Config` class which is part of the provisioner.
        attr_reader :config
    
            # This contains all the configuration plugins by scope.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :configs
    
        # Like #{merge} but merges into self.
    def merge!(other)
      @items.merge!(other.__internal_state[:items])
      self
    end