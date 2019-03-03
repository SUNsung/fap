
        
        describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
          def title
        'Latest Changes (Globally)'
      end
    
          def custom_path
        '#{@base_url}#{@page_dir.empty? ? '' : '/'}#{@page_dir}'
      end
    
      def app
    Precious::App
  end
end
    
      test 'create sets the correct path for a relative path subdirectory' do
    dir  = 'foodir'
    name = '#{dir}/bar'
    get '/create/#{name}'
    assert_match(/\/#{dir}/, last_response.body)
    assert_no_match(/[^\/]#{dir}/, last_response.body)
  end
    
      class DuplicatePageError < Error
    attr_accessor :dir
    attr_accessor :existing_path
    attr_accessor :attempted_path