
        
        # Create an array of vendored mimetype => [extensions]
mimes = {}
json = open('https://raw.githubusercontent.com/jshttp/mime-db/master/db.json').read
data = JSON.parse(json)
data.reject! { |mime, meta| meta['extensions'].nil? || meta['extensions'].empty? }
data.each do |mime, meta|
  # Normalize extensions and mime-types
  mime = mime.downcase.strip
  extensions = meta['extensions'].map { |e| e.downcase.strip }.compact
    
        def relative_to_source(entry)
      File.join(
        base_directory, entry
      )
    end
    
        # Gets the path to this layout relative to its base
    attr_reader :relative_path
    
      it 'passes errors through if :reaction => :report is used' do
    mock_app do
      use Rack::Protection, :reaction => :report
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['protection.failed'].to_s]] }
    end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::XSSHeader, :xss_mode => :foo
      run DummyApp
    end
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end

    
            def operator
          assignment_node = meta_assignment_node || @node
          assignment_node.loc.operator.source
        end