
        
                # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
          # Returns the full path to the template, taking into accoun the gem directory
      # and adding the `.erb` extension to the end.
      #
      # @return [String]
      def full_template_path
        @template_root.join('#{template}.erb').to_s.squeeze('/')
      end
    end
  end
end

    
      def test_plus
    set = Set[1,2,3]
    
      it 'decodes the remaining longs when passed the '*' modifier after another directive' do
    array = 'degfhacbacbdegfh'.unpack(unpack_format()+unpack_format('*'))
    array.should == [7234302065976107874, 7017560827710891624]
  end
    
      # Hangs on 1.8.6.114 OS X, possibly also on Linux
  quarantine! do
    it 'is deferred if ensure clause sleeps' do
      ThreadSpecs.wakeup_dying_sleeping_thread(@method) { sleep; ScratchPad.record :after_sleep }
      ScratchPad.recorded.should == :after_sleep
    end
  end
    
        prune
  end
    
        private
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
        # Never trust parameters from the scary internet, only allow the white list through.
    def book_params
      params.require(:book).permit(:name)
    end
end

    
            def name
          @node.children.first
        end
    
    module RuboCop
  module Cop
    module Layout
      # Checks for unnecessary additional spaces inside array percent literals
      # (i.e. %i/%w).
      #
      # @example
      #
      #   # bad
      #   %w(foo  bar  baz)
      #   # good
      #   %i(foo bar baz)
      class SpaceInsideArrayPercentLiteral < Cop
        include MatchRange
        include PercentLiteral
    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
            private
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
              [optarg_positions, arg_positions]
        end
      end
    end
  end
end
