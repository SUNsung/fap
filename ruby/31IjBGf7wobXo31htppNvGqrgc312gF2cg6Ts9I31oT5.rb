
        
              it 'does not try to convert with to_str' do
        obj = BasicObject.new
        def obj.to_str
          'abc'
        end
    
    describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
    describe :kernel_system, shared: true do
  it 'executes the specified command in a subprocess' do
    lambda { @object.system('echo a') }.should output_to_fd('a\n')
    
      it 'returns true when passed ?e if the argument is a file' do
    Kernel.test(?e, @file).should == true
  end
    
      # String arguments should be evaluated in the context of the caller.
  it 'accepts a String argument instead of a Proc or block' do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'
    
            private
    
            # Takes besides the products attributes either an array of variants or
        # an array of option types.
        #
        # By submitting an array of variants the option types will be created
        # using the *name* key in options hash. e.g
        #
        #   product: {
        #     ...
        #     variants: {
        #       price: 19.99,
        #       sku: 'hey_you',
        #       options: [
        #         { name: 'size', value: 'small' },
        #         { name: 'color', value: 'black' }
        #       ]
        #     }
        #   }
        #
        # Or just pass in the option types hash:
        #
        #   product: {
        #     ...
        #     option_types: ['size', 'color']
        #   }
        #
        # By passing the shipping category name you can fetch or create that
        # shipping category on the fly. e.g.
        #
        #   product: {
        #     ...
        #     shipping_category: 'Free Shipping Items'
        #   }
        #
        def new; end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end