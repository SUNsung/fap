
        
        describe 'Kernel.throw' do
  it 'transfers control to the end of the active catch block waiting for symbol' do
    catch(:blah) do
      :value
      throw :blah
      fail('throw didn't transfer the control')
    end.should be_nil
  end
    
        # Parse all the selectors in the document and assign them to
    # {Sass::Tree::RuleNode#parsed_rules}.
    #
    # @param root [Tree::Node] The parent node
    def parse_selectors(root)
      root.children.each do |child|
        next parse_selectors(child) if child.is_a?(Tree::DirectiveNode)
        next unless child.is_a?(Tree::RuleNode)
        parser = Sass::SCSS::CssParser.new(child.rule.first, child.filename, nil, child.line)
        child.parsed_rules = parser.parse_selector
      end
    end
    
        # Adds an entry to the exception's Sass backtrace.
    #
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def add_backtrace(attrs)
      sass_backtrace << attrs.reject {|_k, v| v.nil?}
    end
    
        # Parses the command-line arguments and runs the executable.
    # Calls `Kernel#exit` at the end, so it never returns.
    #
    # @see #parse
    def parse!
      # rubocop:disable RescueException
      begin
        parse
      rescue Exception => e
        # Exit code 65 indicates invalid data per
        # http://www.freebsd.org/cgi/man.cgi?query=sysexits. Setting it via
        # at_exit is a bit of a hack, but it allows us to rethrow when --trace
        # is active and get both the built-in exception formatting and the
        # correct exit code.
        at_exit {exit Sass::Util.windows? ? 13 : 65} if e.is_a?(Sass::SyntaxError)
    
          opts.on('--precision NUMBER_OF_DIGITS', Integer,
              'How many digits of precision to use when outputting decimal numbers.',
              'Defaults to #{Sass::Script::Value::Number.precision}.') do |precision|
        Sass::Script::Value::Number.precision = precision
      end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
                if @order.completed? || @order.next
              state_callback(:after)
              respond_with(@order, default_template: 'spree/api/v1/orders/show')
            else
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
            end
          else
            invalid_resource!(@order)
          end
        end
    
              can_event = 'can_#{@event}?'
    
            def find_payment
          @payment = @order.payments.find_by!(number: params[:id])
        end
    
            def show
          @taxon = taxon
          respond_with(@taxon)
        end
    
    
    # By leaving this as a class method, it can be pluggable and used by the Manager actor. Making it
    # an instance method will make it async to the Fetcher actor
    def self.bulk_requeue(inprogress, options)
      return if inprogress.empty?
    
        def self.logger
      defined?(@logger) ? @logger : initialize_logger
    end
    
          def exists?(klass)
        any? { |entry| entry.klass == klass }
      end