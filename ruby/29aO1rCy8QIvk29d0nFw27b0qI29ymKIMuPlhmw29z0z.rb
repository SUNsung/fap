
        
        module Homebrew
  module_function
    
          def title
        'Create a new page'
      end
    
            return left_shift(b[0], 24) |
            left_shift(b[1], 16) |
            left_shift(b[2], 8) |
            b[3] & 0xFF
      end
    
          def header_format
        has_header && @header.format.to_s
      end
    
      test 'edit page with slash' do
    page_1 = @wiki.page('A')
    post '/edit/A', :content => 'abc', :page => 'A', :path => '/////',
         :format             => page_1.format, :message => 'def'
    follow_redirect!
    assert last_response.ok?
  end
    
      test 'creates korean page which contains korean content' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
      new_version
end