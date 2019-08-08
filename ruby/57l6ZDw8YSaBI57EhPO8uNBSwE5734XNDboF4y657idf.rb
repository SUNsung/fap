
        
              assert_match %r{Finished in.*\n2 runs, 2 assertions}, output
      assert_no_match 'create_table(:users)', output
    end
    
        class ::HelperyTestController < AbstractHelpers
      clear_helpers
    end
    
              path
        end
      end
    
      if fast_forwards.include?(name)
    puts '#{name}: TEMP IGNORE'
    unavailable.push(Struct::Blog.new(name, web_url, nil))
    next
  end
    
          set_preference args[0], args[1] if args.size == 2
    end
    
            it 'sets the acceptance status errors' do
          expect(return_item.acceptance_status_errors).to eq validator_errors
        end
      end
    
              # regression for #3287
          it 'doesn't select backend rates even if they're more affordable' do
            expect(subject.shipping_rates(package).map(&:selected)).to eq [true]
          end
        end
    
            def option_value_params
          params.require(:option_value).permit(permitted_option_value_attributes)
        end
      end
    end
  end
end

    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
          context 'and :python_package_name_prefix is set' do
        it 'should prefix the package name appropriately' do
          prefix = 'whoa'
          subject.attributes[:python_package_name_prefix] = prefix
          subject.input(example_dir)
          insist { subject.name } == '#{prefix}-example'
        end
      end
    end
    
        if info.include?('repository')
      self.url = info['repository']['url']
    else
      self.url = 'https://npmjs.org/package/#{self.name}'
    end
    
      def to_s_extension; 'pkg'; end
    
        # Arch has no notion of vendor, so...
    #self.vendor =