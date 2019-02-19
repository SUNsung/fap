
        
        module ActionView #:nodoc:
  # = Action View Text Template
  class Template #:nodoc:
    class Text #:nodoc:
      attr_accessor :type
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
        it 'returns true when passed ?W if the argument is readable by the real uid' do
      Kernel.test(?W, @tmp_file).should be_true
    end
  end
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end
    
          expect(new_source)
        .to eq(construct(false, a, make_multi(safe_heredoc), false))
    end
  end
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
          DOUBLE_SPLAT = '**'.freeze
    
      before { ensure_order_totals }
end
    
          expect(json_response['data'][0]).to have_type('credit_card')
      expect(json_response['data'][0]).to have_relationships(:payment_method)
      expect(json_response['data'][0]).to have_attribute(:last_digits)
      expect(json_response['data'][0]).to have_attribute(:month)
      expect(json_response['data'][0]).to have_attribute(:year)
      expect(json_response['data'][0]).to have_attribute(:name)
    end
  end
    
      let!(:user)  { create(:user_with_addresses) }
  let(:headers) { headers_bearer }
    
              def resource_serializer
            Spree::Api::Dependencies.storefront_cart_serializer.constantize
          end
        end
      end
    end
  end
end

    
          item.update_column(:pre_tax_amount, pre_tax_amount)
    end
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def log_state_changes
          if @order.previous_changes[:state]
            @order.log_state_changes(
              state_name: 'order',
              old_state: @order.previous_changes[:state].first,
              new_state: @order.previous_changes[:state].last
            )
          end
        end