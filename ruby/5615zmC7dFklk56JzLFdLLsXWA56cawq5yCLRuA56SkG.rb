
        
        desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end